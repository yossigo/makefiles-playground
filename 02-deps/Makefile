
MYPROG = myprog
MYPROG_SOURCES = $(wildcard *.c)
MYPROG_OBJECTS = $(patsubst %.c,%.o,$(MYPROG_SOURCES))

all: $(MYPROG)

# Dependencies? gcc -MM
#-include Makefile.dep

#.PHONY: dep
#dep:
#	$(CC) -MM $(MYPROG_SOURCES) > Makefile.dep

$(MYPROG): $(MYPROG_OBJECTS)
	$(CC) -o $@ $^

clean:
	-rm -f $(MYPROG) $(MYPROG_OBJECTS)
