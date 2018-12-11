OBJS	= Problem-8.o,Chapter-9.o,Chapter-20.o,Chapter-13.o,Chapter-20p1.o
OUT	= Problem-8,Chapter9,Chapter-20,Chapter-13,Chapter-20p1

OBJS0	= Problem-8.o
SOURCE0	= Problem-8.c
HEADER0	= 
OUT0	= Problem-8

OBJS1	= Chapter-9.o
SOURCE1	= Chapter-9.c
HEADER1	= 
OUT1	= Chapter9

OBJS2	= Chapter-20.o
SOURCE2	= Chapter-20.c
HEADER2	= 
OUT2	= Chapter-20

OBJS3	= Chapter-13.o
SOURCE3	= Chapter-13.c
HEADER3	= 
OUT3	= Chapter-13

OBJS4	= Chapter-20p1.o
SOURCE4	= Chapter-20p1.c
HEADER4	= 
OUT4	= Chapter-20p1

CC	 = gcc
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: Problem-8 Chapter9 Chapter-20 Chapter-13 Chapter-20p1

Problem-8: $(OBJS0) $(LFLAGS)
	$(CC) -g $(OBJS0) -o $(OUT0)

Chapter9: $(OBJS1) $(LFLAGS)
	$(CC) -g $(OBJS1) -o $(OUT1)

Chapter-20: $(OBJS2) $(LFLAGS)
	$(CC) -g $(OBJS2) -o $(OUT2)

Chapter-13: $(OBJS3) $(LFLAGS)
	$(CC) -g $(OBJS3) -o $(OUT3)

Chapter-20p1: $(OBJS4) $(LFLAGS)
	$(CC) -g $(OBJS4) -o $(OUT4)

Problem-8.o: Problem-8.c
	$(CC) $(FLAGS) Problem-8.c 

Chapter-9.o: Chapter-9.c
	$(CC) $(FLAGS) Chapter-9.c 

Chapter-20.o: Chapter-20.c
	$(CC) $(FLAGS) Chapter-20.c 

Chapter-13.o: Chapter-13.c
	$(CC) $(FLAGS) Chapter-13.c 

Chapter-20p1.o: Chapter-20p1.c
	$(CC) $(FLAGS) Chapter-20p1.c 


clean:
	rm -f $(OBJS) $(OUT)