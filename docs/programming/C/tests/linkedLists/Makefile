/// based on http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/

IDIR =../Inc
CC=gcc
CFLAGS=-I$(IDIR)

ODIR=build
LDIR =../lib

LIBS=-lm

_DEPS = ll-func.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = ll-func.out ll-main.out 
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.out: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 