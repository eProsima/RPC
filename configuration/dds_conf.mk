NDDS_DIR=/cygdrive/c/Program\ Files\ \(x86\)/RTI/ndds.4.4b
WINDOWS_DIR=/cygdrive/c/Program\ Files\ \(x86\)/Microsoft\ SDKs/Windows/v5.0/Lib/IA64
CFLAGS+= -DWIN32 -DRTI_WIN32 -mwindows

INCLUDE_DIRS+= -I$(NDDS_DIR)/include/ndds \

LIBS+= $(NDDS_DIR)/lib/i86Win32VS2008/nddscppz.lib
LIBS+= $(NDDS_DIR)/lib/i86Win32VS2008/nddscz.lib
LIBS+= $(NDDS_DIR)/lib/i86Win32VS2008/nddscorez.lib
LIBS+= $(WINDOWS_DIR)/NetAPI32.Lib
LIBS+= $(WINDOWS_DIR)/AdvAPI32.Lib
