CC = g++
CFLAGS = -Wall

OBJ= guitarfx.o tremolo.o amplifier.o flanger.o

all: guitarfx clean

guitarfx: $(OBJ)
	$(CC) -o $@ $(CFLAGS) $(OBJ)

.cpp.o:
	$(CC) -c $< $(CFLAGS)

clean:
	rm -f *.o

hardclean:
	rm -f `find . -perm +111 -type f`