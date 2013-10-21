#include <stdio.h>

int main()
{
    int m,g,tz1,tz2;
    tz1=0;
    tz2=3;
	    for(m=2;m<=10;)
	{
	       for(g=2;g<=tz2-1;g++)
	   { 
	  	 if(tz2%g==0)
		break;
	}		
	    if (g==tz2)
	 {
	      if(tz2==tz1+2)
	   {
		printf("[%d;%d]\n" ,tz1,tz2);	
		m++;
	     }
	       tz1=tz2;	
              }
		tz2++;
	}
	return 0;
}			
