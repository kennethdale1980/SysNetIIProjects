CFLAGS = -g -Wall
CC = gcc

serverObjects = bbmenu.o bbserver.o
peerObjects = bbmenu.o bbpeer.o

all: bbserver bbpeer

bbserver: $(serverObjects)
	$(CC) -o bbserver $(serverObjects)

bbpeer: $(peerObjects)
	$(CC) -o bbpeer $(peerObjects)

bbmenu.o: bbmenu.h bbmenu.c
bbmenu.o: bbpeer.h bbpeer.c
bbmenu.o: bbserver.h bbserver.c

.PHONY: clean
clean:
	rm bbserver bbpeer $(serverObjects) $(peerObjects)
