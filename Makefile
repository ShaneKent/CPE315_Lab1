CC = gcc
CFLAGS = -Wall -Werror -ansi -pedantic
MAIN = lab1
OBJS = Lab1.o Lab1_1.o Lab1_2.o Lab1_3.o Lab1_4.o Lab1_5.o Lab1_6.o

all : $(MAIN)

$(MAIN) : $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

Lab1.o : Lab1.c
	$(CC) $(CFLAGS) -c -o Lab1.o Lab1.c

Lab1_1.o : Lab1_1.c Lab1_1.h
	$(CC) $(CFLAGS) -c -o Lab1_1.o Lab1_1.c

Lab1_2.o : Lab1_2.c Lab1_2.h
	$(CC) $(CFLAGS) -c -o Lab1_2.o Lab1_2.c

Lab1_3.o : Lab1_3.c Lab1_3.h
	$(CC) $(CFLAGS) -c -o Lab1_3.o Lab1_3.c

Lab1_4.o : Lab1_4.c Lab1_4.h
	$(CC) $(CFLAGS) -c -o Lab1_4.o Lab1_4.c

Lab1_5.o : Lab1_5.c Lab1_5.h
	$(CC) $(CFLAGS) -c -o Lab1_5.o Lab1_5.c

Lab1_6.o : Lab1_6.c Lab1_6.h
	$(CC) $(CFLAGS) -c -o Lab1_6.o Lab1_6.c

clean :
	rm *.o $(MAIN)
