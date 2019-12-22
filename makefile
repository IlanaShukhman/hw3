CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_INSERTION=insertionSort.c insertionSort.h insertionSortMain.c
OBJECTS_FINDTXT=txtfind.c txtfind.h txtfindmain.c
FLAGS= -Wall -fPIC

all: isort txtfind
isort: $(OBJECTS_INSERTION)
	$(CC) $(FLAGS) $(OBJECTS_INSERTION) -o isort
txtfind: $(OBJECTS_FINDTXT)
	$(CC) $(FLAGS) $(OBJECTS_FINDTXT) -o txtfind


.PHONY: clean all

clean:
	rm -f *.o *.a *.so txtfind isort
