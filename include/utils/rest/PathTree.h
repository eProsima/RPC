#ifndef PATH_TREE
#define PATH_TREE

#include <vector>
#include <string>

using namespace std;

namespace eprosima{
namespace rpcdds{
namespace util{
namespace rest{

// Typedef to function pointer
typedef char* (*ResourceMethodResolver)(string);

class PathTree {
private:
	PathTree* parent;
	string tag;
	bool variableNode;

	vector<PathTree*> children;

	ResourceMethodResolver resourceMethodResolver;

	bool existsChild(string tag);
	void addChild(string tag);
	PathTree* getChild(string tag);
public:
	PathTree(): parent(NULL), tag(""), variableNode(false), resourceMethodResolver(NULL) {}
	PathTree(PathTree* parent, string tag): parent(parent), tag(tag), resourceMethodResolver(NULL)
	{ 
		if(tag.at(0) == '{' && tag.at(tag.size() - 1) == '}')
			variableNode = true;
		else 
			variableNode = false;
	}

	string getTag() { return tag; }
	bool isVariableNode() { return variableNode; }
	ResourceMethodResolver getResourceMethodResolver() { return resourceMethodResolver; }

	void addPath(string path);
	void addResourceMethodResolver(string resourcePath, ResourceMethodResolver resourceMethodResolver);
	PathTree* resolvePath(string path);
};

#endif // PATH_TREE

} // namespace rest
} // namespace util
} // namespace rpcdds
} // namespace eprosima