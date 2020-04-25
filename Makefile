CC=gcc
CFLAGS=-I.
DEPS = aux.h
OBJ = ascii.o aux.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

ascii: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean: 
	rm ascii.o
