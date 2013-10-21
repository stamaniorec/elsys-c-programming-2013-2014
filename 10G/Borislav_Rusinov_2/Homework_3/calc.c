#include <stdio.h>
#include <string.h>
int main () 
{
	int checker;
	int a,b,c;
	char  operation[4];
	char  add[4]="add";
	char 	sub[4]="sub";
	char mul[4]="mul";
	char div[4]="div";
	char mod[4]="mod";
	printf("first number:");
	scanf("%d",&a);
	printf("operation:");
	scanf("%s",&operation);
	printf("second number:");
	scanf("%d",&b);
	c=0;
	checker=0;
	 if (strcmp(operation,add)==0)
	{
		c=a+b;
		printf("%d\n",c);
		checker=1;	
	}
	if (strcmp(operation,sub)==0)
	{
		c=b-a;
		printf("%d\n",c);
		checker=1;	
	}
	if (strcmp(operation,mul)==0)
	{
		c=a*b;
		printf("%d\n",c);
		checker=1;	
	}
	if (strcmp(operation,div)==0)
	{
		if (b==0) 
		{
			printf("error\n");
			checker=1;
		}else
		{
		c=a/b;
		printf("%d\n",c);
		checker=1;
		}	
	}
	if (strcmp(operation,mod)==0)
	{
		if (b==0)
		{
			printf("error\n");
			checker=1;		
		}else 
		{
		c=a%b;
		printf("%d\n",c);
		checker=1;
		}
	}	
	if (checker==0)
	{
		printf("error\n");	
	}	 
	return 0;
}
