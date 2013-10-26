#include<stdio.h>

int main()
{
	
	int n_numbers, i, j, numbers_sum = 0, input_numbers[100];
	 
	
 	do
 	{	
 	 scanf("%d",&n_numbers);

 	}while(n_numbers < 0 ||	n_numbers >100);

	for (i=1; i<n_numbers; i++)
	{
		for(j=0; j<n_numbers; j++)
		{
			scanf("%d ",&input_numbers[j]);
			if (j >= i) {
			numbers_sum += input_numbers[j];
			}
		}
		
	}


	
	printf("%d",numbers_sum);


	return 0;
}
