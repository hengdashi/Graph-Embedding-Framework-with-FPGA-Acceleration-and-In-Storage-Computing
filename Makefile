# build an executable named myprog from myprog.c
CC = gcc
CFLAGS = -Wall -g
LDFLAGS = -lm

all:
	$(CC) -o gcn $(CFLAGS) ./src/gcnconv.c $(LDFLAGS)

clean:
	$(RM) -r gcn gcn*/
