CC = gcc
CFLAGS = -std=gnu99

osc: osc.o
	$(CC) $(CFLAGS) -o osc osc.o

osc.o: osc.c
	$(CC) $(CFLAGS) -c osc.c
	
