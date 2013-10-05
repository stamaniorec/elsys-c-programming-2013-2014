#include<stdio.h>


int main() 
{
//Lucas Numbers
      unsigned int N1=2;
      unsigned int N2=1;
      unsigned int N_sum=0;
      unsigned int N_number=0;
         
	printf("%u\n",N1);
	printf("%u\n",N2);

	for(N_number;N_number<100;N_number++)
        {
		N_sum=N1+N2;
		printf("%u\n",N_sum);
		N1=N2;
		N2=N_sum;
	} 



return 0;
}
