#include<stdio.h>


int main() 
{
//Lucas Numbers
      unsigned long N1=2;
      unsigned long N2=1;
      unsigned long N_sum=0;
      unsigned long N_number=0;
         
	printf("%lu\n",N1);
	printf("%lu\n",N2);

	for(N_number;N_number<100;N_number++)
        {
		N_sum=N1+N2;
		printf("%lu\n",N_sum);
		N1=N2;
		N2=N_sum;
	} 



return 0;
}
