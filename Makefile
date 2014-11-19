CC = gcc
ARCHIVER = ar

INCLUDES =
CFLAGS = -g -Wall $(INCLUDES)
ARFLAGS = rcs
LDFLAGS = -g

SOURCES = jsURLparser.c cutils.c

OBJECTS = $(SOURCES:.c=.o)

LIBRARY = libcutils.a

$(LIBRARY): $(OBJECTS) 
	$(ARCHIVER) $(ARFLAGS) $(LIBRARY) $(OBJECTS)

.c.o:
	$(CC) $(CFLAGS) $(INCLUDES) -c $<  -o $@

.PHONY: clean
clean:
	rm -f *.o $(LIBRARY)

.PHONY: embed
embed: $(OBJECTS)

.PHONY: reembed
reembed: clean $(OBJECTS)

.PHONY: all
all: clean $(LIBRARY)
