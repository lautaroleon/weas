
example1: VDL_INQNET.o example1.o
	g++ -o example1 example1.o  VDL_INQNET.o

example1.o: example1.cpp VDL_INQNET.h
	g++ -c example1.cpp

VDL_INQNET.o: VDL_INQNET.h VDL_INQNET.cpp
	g++ -c VDL_INQNET.cpp
