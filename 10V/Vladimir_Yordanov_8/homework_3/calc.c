#include <stdio.h>

int main ()
{
int num1, num2, answer, error = 0;
char operator[3];

printf("\nVyvedi chislo, operator, chislo:\n ");
scanf("%d %s %d", &num1, operator, &num2);

if (strcmp(operator, "add") == 0) 
	{ answer=num1+num2; }

else if (strcmp(operator, "sub") == 0)
	{ answer=num1-num2; }

else if (strcmp(operator, "mul") == 0)
	{ answer=num1*num2;}

else if (strcmp(operator, "div") == 0)
	{ if (num2!=0) 
		{ answer=num1/num2; }
	  else  
		{ 
		printf("Error : division by zero\n");
		error=1; 
		}	
	}

else if (strcmp(operator,"mod") == 0)
	{
	  if (num2!=0) 
		{ answer=num1%num2; }
	  else 
		{ 
		printf("Error : division by zero\n");
		error=1; 
		} 
	}
else 
	{ 
	printf("Error\n");
	error=1; 
	}

if (error!=1) { printf("%d\n", answer); }
return 0;
}
