#include <stdio.h>
#include <string.h>
int main () 
{
	int asd;
	int a,b,c;
	char  operacia[4];
	char  add[4]="add";
	char 	sub[4]="sub";
	char mul[4]="mul";
	char div[4]="div";
	char mod[4]="mod";
	printf("vuvedi purvo chislo:");
	scanf("%d",&a);
	printf("vuvedi znak za operaciqta:");
	scanf("%s",&operacia);
	printf("vuvedi vtoro chislo:");
	scanf("%d",&b);
	c=0;
	asd=0;
	 if (strcmp(operacia,add)==0)
	{
		c=a+b;
		printf("%d\n",c);
		asd=1;	
	}
	if (strcmp(operacia,sub)==0)
	{
		c=b-a;
		printf("%d\n",c);
		asd=1;	
	}
	if (strcmp(operacia,mul)==0)
	{
		c=a*b;
		printf("%d\n",c);
		asd=1;	
	}
	if (strcmp(operacia,div)==0)
	{
		c=a/b;
		printf("%d\n",c);
		asd=1;	
	}
	if (strcmp(operacia,mod)==0)
	{
		c=a%b;
		printf("%d\n",c);
		asd=1;
	}	
	if (asd==0)
	{
		printf("error\n");	
	}	 
	return 0;
}
