#include<stdio.h>

int main() 
{
	
	int z,i,f,print,pred;
	pred=2;
	print=0;
	i=2;
	f; 
  while(print<10)
  { 
  f=0;
  
  for(z=2;z<=i/2;z++)
  {
    if(i%z==0)
      {
    f=1;
    break;
     }

  }
  if(f==0)
  {
    if(i==pred+2)
    {
     printf("%d - ",pred);
     printf("%d\n",i);
     print++;
    }
     pred=i;  
        }
      i++;
}
 
}
