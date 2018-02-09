CFLAGS = -g -Wall
CC = gcc

objects = bbmenu.o bbpeer.o bbserver.o

syntaxAnalyzer: $(objects)
	$(CC) -o bb $(objects)

bbmenu.o: bbmenu.h bbmenu.c
bbmenu.o: bbpeer.h bbpeer.c
bbmenu.o: bbserver.h bbserver.c

.PHONY: clean
clean:
	rm bb $(objects)
