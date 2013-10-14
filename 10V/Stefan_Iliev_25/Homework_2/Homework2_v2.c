#include<stdio.h>


int main() 
{
int printed_numb=0;
int x;
int prev_number=2;
int number=2;
int flag; 
  while(printed_numb<10)
  { 
	flag=0;
	
	for(x=2;x<=number/2;x++)
	{
	  if(number%x==0)
 	   {
		flag=1;
		break;
	   }

	}
	if(flag==0)
	{
		if(number==prev_number+2)
		{
		 printf("%d - ",prev_number);
		 printf("%d\n",number);
		 printed_numb++;
		}
	   prev_number=number;	
        }
      number++;

  }

return 0;
}
