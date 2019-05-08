#ifndef PS9130B_INQNET_H
#define PS9130B_INQNET_H 

#include <stdio.h>
#include <visa.h>

	using namespace std;


class PS9130B
{  

public:

	int init();

	ViSession defaultRM, vi;
	ViStatus rc;
	 ViFindList find_list;

	PS9130B();
	~PS9130B();	


};

#endif 
