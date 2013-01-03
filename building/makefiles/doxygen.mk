eliminardir:
	rm -rf output/doxygen
	
output/doxygen:
	# Call doxygen and create html and latex files
	doxygen utils/doxygen/doxyfile
	# Create pdf file from latex files
	make -C output/doxygen/latex
	# Mount the central computer documentation directory.
	mount doc/rpcdds_doc
	# Sync html files to central computer
	rsync -av -e ssh output/doxygen/html/ doc/rpcdds_doc/html/
	# Copy the pdf file.
	cp output/doxygen/latex/refman.pdf doc/rpcdds_doc/pdf/RPCDDS_API.pdf
	# Copy manuals from central computer
	cp doc/rpcdds_doc/pdf/RPCDDS_InstallationManual.pdf doc/pdf/
	cp doc/rpcdds_doc/pdf/RPCDDS_UserManual.pdf doc/pdf/
	# Unmount the centra computer.
	sudo umount doc/rpcdds_doc
	# Copy html files locally.
	rm -r doc/html
	mkdir doc/html
	cp -r output/doxygen/html/* doc/html/
	# Copy pdf locally
	cp output/doxygen/latex/refman.pdf doc/pdf/RPCDDS_API.pdf

doxygen: eliminardir output/doxygen

