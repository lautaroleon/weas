#include "VDL_INQNET.h"



VDL::VDL(){

	i=0,
        cport_nr=0,        /* /dev/ttyS0 (COM1 on windows) */
        bdrate=9600;       /* 9600 baud */

  	
       

 if(RS232_OpenComport(cport_nr, bdrate, mode))
  {
   	printf("Can not open comport\n");

   	
  }


}

int VDL::setDelay(float delay){

	/*const char base_string[] = "base_string";
	char out_string [512];
	sprintf(out_string, "%s%f", base_string, delay);
	printf("out_string = "%s"n", out_string);*/


	
	

	std::stringstream out;
	out << "_ABS_" << delay << "$";
	std::string s = out.str();

	send(s);
	
return 0;
}

int VDL::send(std::string string){



	//char *str = const_cast<char*>(string.c_str());

	RS232_cputs(cport_nr, string.c_str());

    	printf("sent: %s\n", string.c_str());

	usleep(1000000);
	
return 0;
}


void VDL::lisent(){

 while(1)
  {
    int count;
    n = RS232_PollComport(cport_nr, buf, 4095);

    if(n > 0)
    {
      buf[n] = 0;   /* always put a "null" at the end of a string! */

      for(i=0; i < n; i++)
      {
        if(buf[i] < 32)  /* replace unreadable control-codes by dots */
        {
          buf[i] = '.';
        }
      }

      printf("received %i bytes: %s\n", n, (char *)buf);
    }

    usleep(100000);  /* sleep for 100 milliSeconds */
  count++;
  if(count>100)break;
  }
}

void VDL::stop(){

std::stringstream out;
	out << "_STP_$";
	std::string s = out.str();

	send(s);

}



VDL::~VDL(){



}





