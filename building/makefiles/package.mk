package:
	# Create temporary directory.
	mkdir tmp
	# Create root rpcdds directory
	mkdir tmp/rpcdds
	# Copy documentation.
	mkdir tmp/rpcdds/doc
	cp -r doc/html tmp/rpcdds/doc/
	cp -r doc/pdf tmp/rpcdds/doc/
	# Copy examples.
	cp -r examples tmp/rpcdds/
	rm -rf `find tmp/rpcdds/examples -type d -name objs`
	# Copy rpcddsgen java classes.
	mkdir tmp/rpcdds/classes
	cp rpcddsgen/lib/*.jar tmp/rpcdds/classes/
	# Copy rpcddsgen script
	mkdir tmp/rpcdds/scripts
	cp scripts/rpcddsgen.sh tmp/rpcdds/scripts/
	# Copy IDL
	mkdir tmp/rpcdds/idl
	cp idl/MessageHeader.idl tmp/rpcdds/idl/
	# Remove tmp directory
	rm -r tmp
