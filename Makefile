CC=clang
LIBS=-lncurses
CFLAGS=-c -Wall --ansi --pedantic
LDFLAGS=--ansi --pedantic
SOURCES=grafik.c spelet.c
MAIN=main.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=ppong

all: $(EXECUTABLE)

$(EXECUTABLE): main.c $(OBJECTS)
	$(CC) $(LDFLAGS) $(LIBS) $(OBJECTS) $(MAIN)  -o $@

.c.o: $(SOURCES)
	$(CC) $(CFLAGS) $< -o $@
	
clean:
	rm  $(EXECUTABLE) $(OBJECTS)
