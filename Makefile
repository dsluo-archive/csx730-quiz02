CC=gcc
CFLAGS=-std=c17 -g -Wall -O0 -pedantic-errors
AS=as
AFLAGS=-gstabs+
RM=rm -f

main: main.o gcd.o
	$(CC) -o main $^
main.o: main.c
	$(CC) $(CFLAGS) -c $<
gcd.o: gcd.s
	$(AS) $(AFLAGS) -o $@ $<

