#include<stdio.h>
#include<string.h>


int main()
{
  int number1,number2,numb_sum;
  int correct_function=0;
  char function[5];

scanf("%d,%s,%d",number1,function,number2);

	if (!strcmp(function, "add")) 
	{
        	numb_sum = number1 + number2;
		correct_function = 1;
	}
	
	if (!strcmp(function, "mul"))
	{
		numb_sum = number1 * number2;
		correct_function = 1;
	}

	if (!strcmp(function, "sub")) 
	{
        	numb_sum = number1 - number2;
		correct_function = 1;
	}

 	
	if (!strcmp(function, "div")) 
	{
        	numb_sum = number1 / number2;
		correct_function = 1;
	}

	
	if (!strcmp(function, "mod")) 
	{
        	numb_sum = number1 % number2;
		correct_function = 1;
	}

	if (!correct_function) 
	{
		printf("Error.You have selected an incorrect function!\n");
	}
	else 
	{
	printf("%d\n",numb_sum);
	}
return 0;
}
