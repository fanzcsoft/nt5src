!IF 0

Copyright (C) Microsoft Corporation, 1997 - 1999

Module Name:

    sources.

!ENDIF

MAJORCOMP=ntos
MINORCOMP=dd

TARGETNAME=swenum
TARGETPATHLIB=$(DDK_LIB_DEST)
TARGETTYPE=DRIVER
TARGETPATH=obj
TARGETLIBS=$(DDK_LIB_PATH)\ks.lib\
    $(DDK_LIB_PATH)\ksguid.lib

DRIVERTYPE=WDM

MSC_WARNING_LEVEL=/W3 /WX

C_DEFINES=$(C_DEFINES) -DUNICODE -D_UNICODE
#C_DEFINES=$(C_DEFINES) -DUNICODE -D_UNICODE -DDEBUG_LEVEL=DEBUGLVL_BLAB

LINKER_FLAGS =$(LINKER_FLAGS) -map -merge:PAGECONST=PAGE

SOURCES=\
        $(TARGETNAME).rc    \
        $(TARGETNAME).c
