

DDSCS V.1.0 TO DO List

- Optional solution/project generation?
- Optional replace of ddscs generated files? (now are always replaced)
- Optios to generate just a client or a server (both are always generated)
- Output Directory: Coherent behaviour with rtiddsgen outputdirectory.
- configurable function call timeouts (fixed to 2 seconds).
- Matching server (Request DataReader) detection has two drawbacks:
	1.- If the publication matched status is triggered between get_publication_matched_status()
	    and wait() calls it will be missed.
	2.- If there is no matched entity the total wait time may be up to 2*tTimeout


