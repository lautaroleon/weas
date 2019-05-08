#include "PS9130B_INQNET.h"
#include <visa.h>

PS9130B::PS9130B(){

init();

}

int PS9130B::init(){


	long unsigned int retCnt=0;
 	char buf[ 500 ] = { 0 };
	char instrDesc[100]={0};
	char instrAux[20] ={"USB0::?*INSTR"};
	
 	rc = viOpenDefaultRM( &defaultRM);
	if(rc != VI_SUCCESS)
		printf(  "OpenDefault fail\n" );
	else printf(  "OK OpenDefault\n" );
	
	rc= viFindRsrc(defaultRM, instrAux,&find_list, &retCnt, instrDesc);
	printf(  "OK find\n" );
 	rc = viOpen( defaultRM, instrDesc, VI_NULL, VI_NULL, &vi );
	if (rc != VI_SUCCESS){
 		printf("Can not find USBTMC device!\n");
 		viClose(vi);
 		viClose (defaultRM);
		return 0;
 	}else printf(  "OK viOpen\n" );

	printf("USBTMC device : %s\n",instrDesc);
	char idn[10] = {"*idn?\n"};
	viPrintf(vi,idn);
 	//viPrintf(vi,"*idn?\n"); 

 //viPrintf( vi, "*IDN?\n" );



 /*long unsigned int retCnt=0;
 char buf [256] = {0};
 char instrDesc[100]={0};
 ViSession defaultRM,vi;
 ViStatus status;
 ViFindList find_list;
 viOpenDefaultRM (&defaultRM);
 status = viFindRsrc(defaultRM, "USB0::?*INSTR",&find_list, &retCnt, instrDesc);
 status = viOpen(defaultRM,instrDesc, VI_NULL,VI_NULL, &vi);
 	if (status != VI_SUCCESS){
 	printf("Can not find USBTMC device!\n");
 	viClose(vi);
 	viClose (defaultRM);
 	return;
 	}
 printf("USBTMC device : %s\n",instrDesc);
 viPrintf(vi,"*idn?\n");
 //viScanf (vi, "%t", &buf);
 printf("%s\n",buf);
 viClose (vi);
 viClose (defaultRM); 
*/



}

PS9130B::~PS9130B(){



}





