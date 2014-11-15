CC = gcc
ARCHIVER = ar

INCLUDES =
CFLAGS = -g -Wall $(INCLUDES)
ARFLAGS = rcs
LDFLAGS = -g

LIBS =
LIBPATH = 

SOURCES = jsURLparser.c cutils.c

OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = libcutils.a

$(EXECUTABLE): $(OBJECTS) 
	$(ARCHIVER) $(ARFLAGS) $(EXECUTABLE) $(OBJECTS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< $(LIB_PATH) -o $@

.PHONY: clean
clean:
	rm -f *.o $(EXECUTABLE)

.PHONY: all
all: clean $(EXECUTABLE)
