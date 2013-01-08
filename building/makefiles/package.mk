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
	chmod 755 tmp/rpcdds/scripts/rpcddsgen.sh
	# Copy IDL
	mkdir tmp/rpcdds/idl
	cp idl/MessageHeader.idl tmp/rpcdds/idl/
	# Copy header files.
	cp -r include tmp/rpcdds/
	find tmp/rpcdds/include -iname *~ -exec rm {} \;
	# Copy libraries.
	mkdir tmp/rpcdds/lib
	cp -r lib/i86Linux2.6gcc4.4.5 tmp/rpcdds/lib/
	cp -r lib/x64Linux2.6gcc4.4.5 tmp/rpcdds/lib/
	# Copy licenses
	cp doc/licencias/* tmp/rpcdds/
	cp README.html tmp/rpcdds/
	# Remove backup files and svn directories.
	find tmp/rpcdds -iname "*~" -exec rm {} \;
	rm -rf `find tmp/rpcdds -type d -name ".svn"`
	# Create tar.
	tar -czf rpcdds-1.0.tar.gz -C tmp rpcdds/
	# Send tar to central computer
	mount utils/rpcdds_versiones
	mv rpcdds-1.0.tar.gz utils/rpcdds_versiones/
	sudo umount utils/rpcdds_versiones
	# Remove tmp directory
	rm -r tmp
