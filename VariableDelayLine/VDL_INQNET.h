#ifndef VDL_INQNET_H
#define VDL_INQNET_H 

#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include "rs232.h"


	using namespace std;


class VDL
{  

public:

	int i,n;
	int cport_nr;
        int bdrate;
	
	char str[512];
 	unsigned char buf[4096];


	int send(std::string);
	int setDelay(float);
	void lisent();
	void stop();

	VDL();
	~VDL();	

	char mode[4]={'8','N','1',0};

};

#endif 
