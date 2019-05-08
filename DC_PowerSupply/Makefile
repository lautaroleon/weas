

example1: PS9130B_INQNET.o example1.o
	g++ -o example1 example1.o  PS9130B_INQNET.o -lvisa

example1.o: example1.cpp PS9130B_INQNET.h
	g++ -c example1.cpp

VDL_INQNET.o: PS9130B_INQNET.h PS9130B_INQNET.cpp
	g++ -c PS9130B_INQNET.cpp
