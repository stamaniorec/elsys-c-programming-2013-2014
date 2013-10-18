#include <stdio.h>
#include <string.h>
int main ()
{
int num1,num2,rez;
int boolean;
char oper[3];
scanf("%d%s%d",&num1,oper,&num2);
boolean=0;
if (strcmp(oper,"add")==0)
	{
	rez=num1+num2;
	boolean=1;
	printf("%d\n",rez);
	}
else if (strcmp(oper,"sub")==0)
	{
	rez=num1-num2;
	boolean=1;
	printf("%d\n",rez);	
	}
else if (strcmp(oper,"mul")==0)
	{
	rez=num1*num2;
	boolean=1;
	printf("%d\n",rez);
	}
else if (strcmp(oper,"div")==0)
	{
	if (num2!=0)
		{
		rez=num1/num2;
		boolean=1;
		printf("%d\n",rez);
		}
	else printf("Error - delenie na 0!\n");
	}
if (strcmp(oper,"mod")==0)
	{
	if (num2!=0)
		{
		rez=num1%num2;
		boolean=1;
		printf("%d\n",rez);
		}
	else printf("Error - delenie na 0!\n");
	}
else if (boolean==0) printf("Error!\n");
return 0;
}

