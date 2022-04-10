
CC = gcc
CFLAGS = -Wall
all : midterm
.PHONY : all

midterm : count.o copy.o main.o
	$(CC) $(CFLAGS) -o midterm count.o copy.o main.o 
 
count.o : count.c
	$(CC) $(CFLAGS) -c -o count.o count.c  
copy.o : copy.c
	$(CC) $(CFLAGS) -c -o copy.o copy.c
main.o : main.c
	$(CC) $(CFLAGS) -c -o main.o main.c
    
debug : clean count.c copy.c main.c
	$(CC) $(CFLAGS) -g -o test count.c copy.c main.c
	gdb -tui test
    
.PHONY: clean
clean:
	rm -rf *.o
