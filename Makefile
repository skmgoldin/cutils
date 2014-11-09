CC = gcc
ARCHIVER = ar

INCLUDES =
CFLAGS = -g -Wall $(INCLUDES)
ARFLAGS = rcs
LDFLAGS = -g

LIBS =

SOURCES = jsURLparser.c utilities.c

OBJECTS = $(SOURCES:.c=.o)

EXECUTABLE = libCUtilities.a

$(EXECUTABLE): $(OBJECTS) 
	$(ARCHIVER) $(ARFLAGS) $(EXECUTABLE) $(OBJECTS) $(LIBS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

.PHONY: clean
clean:
	rm -f *.o $(EXECUTABLE)

.PHONY: all
all: clean $(EXECUTABLE)
