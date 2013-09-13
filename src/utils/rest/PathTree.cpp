#include "utils/rest/PathTree.h"
#include <algorithm>

namespace eprosima{
namespace rpcdds{
namespace util{
namespace rest{

bool PathTree::existsChild(string tag) {
	PathTree* child;
	for(vector<PathTree*>::iterator it = children.begin(); it != children.end(); ++it) {
		child = *it;
		if(child->getTag().compare(tag) == 0)
			return true;
	}

	return false;
}

void PathTree::addChild(string tag) {
	PathTree* child = new PathTree(this, tag);
	children.push_back(child);
}

PathTree* PathTree::getChild(string tag) {
	PathTree* child = NULL;
	for(vector<PathTree*>::iterator it = children.begin(); it != children.end(); ++it) {
		child = *it;
		if(child->getTag().compare(tag) == 0)
			return child;
	}
	return child;
}

void PathTree::addPath(string path) {
	while(path.size()>0 && path.at(0) == '/')
		path = path.substr(1, path.size());
	if(path.size()==0)
		return; // End of algorithm

	int pos = path.find("/");
	string tag = path.substr(0, pos);
	string rest = "";
	if(pos != string::npos) {	
		rest = path.substr(pos+1, path.size());
	}

	if(!existsChild(tag)) {
		// Child doesn't exist
		addChild(tag); // Child is added
	}

	// Add the rest of the path to the child
	getChild(tag)->addPath(rest);
}

PathTree* PathTree::resolvePath(string path) {
	while(path.size()>0 && path.at(0) == '/')
		path = path.substr(1, path.size());

	if(path.size() == 0)
		return this; // End of path reached, path resolved

	int pos = path.find("/");
	string tag = path.substr(0, pos);
	string rest = "";
	if(pos != string::npos) {	
		rest = path.substr(pos+1, path.size());
	}

	// If child tag exists, resolve rest of the path with child
	if(existsChild(tag)) { 
		return getChild(tag)->resolvePath(rest);
	}

	// if it doesn't exist, it can be an embedded parameter
	PathTree* child = NULL;
	PathTree* resolvedNode = NULL;
	for(vector<PathTree*>::iterator it = children.begin(); it != children.end(); ++it) {
		child = *it;
		if(child->isVariableNode()) {
			if((resolvedNode = getChild(tag)->resolvePath(rest)) != NULL)
				return resolvedNode;
		}
	}

	return resolvedNode;
}

void PathTree::addResourceMethodResolver(string resourcePath, ResourceMethodResolver resourceMethodResolver) {
		addPath(resourcePath);
		PathTree* node = resolvePath(resourcePath);
		node->resourceMethodResolver = resourceMethodResolver; 
}

} // namespace rest
} // namespace util
} // namespace rpcdds
} // namespace eprosima
