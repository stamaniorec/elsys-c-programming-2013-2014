#include <stdio.h>
#include <string.h>
int main()
{
int a,b,c,r;
char op[3];

printf("Calculator\n\n");
scanf("%d %s %d", &a, op, &b);

if (strcmp(op,"add")==0)
	{c=a+b;}
else if (strcmp(op,"sub")==0)
	{c=a-b;}
else if (strcmp(op,"mul")==0)
	{c=a*b;}
else if (strcmp(op,"div")==0)
	{c=a/b;
	 if (b==0) 
		{printf("Do not divide by 0.\n");
		r=1;}}
else if (strcmp(op,"mod")==0)
	{c=a%b;
	 if (b==0) 
		{printf("Do not divide by 0.\n");
		r=1;}}
else {printf("error\n");
	r=1;}
if (r==0)
	{printf("%d\n",c );}

return 0;
}
	






