CFLAGS = -Wall -Wextra -Wshadow -Wformat-nonliteral -Wformat-security -Wtype-limits -o2

example1: VDL_INQNET.o example1.o rs232.o
	g++ VDL_INQNET.o example1.o rs232.o -o example1 

example1.o: example1.cpp VDL_INQNET.h
	g++ $(CFLAGS) -c example1.cpp -o  example1.o  

VDL_INQNET.o: rs232.o VDL_INQNET.h VDL_INQNET.cpp
	g++ $(CFLAGS)  -c VDL_INQNET.cpp -o VDL_INQNET.o 

rs232.o: rs232.h rs232.c
	g++ $(CFLAGS) -c rs232.c -o rs232.o
