#include <stdio.h>
#include <string.h>

int main() {
	char operation[4];
	int nul;
	int a;
	int b;
	int rezult;
 	    
	    
	    scanf("%d%s%d" ,&a,operation,&b);
	  nul=0; 
	  if(b==0)
	  {
	  nul=1;
	  }
	if (strcmp(operation,"add")==0)
	{
		rezult=a+b;	
		printf("%d\n" ,rezult);
	}
	else if (strcmp(operation,"sub")==0)
	{
		rezult=a-b;		
		printf("%d\n" ,rezult);
	}
	else if (strcmp(operation,"mul")==0)
	{
		rezult=a*b;		
		printf("%d\n" ,rezult);
	}
	 else if (strcmp(operation,"div")==0)
	{
	if (nul==1)
	{	
	printf("error\n");
	}
	else
	{	
		rezult=a/b;		
		printf("%d\n" ,rezult);
	}
	}
	else if (strcmp(operation,"mod")==0)
	{
	if (nul==1)
	{	
	printf("error\n");
	}
	else
	{
		rezult=a%b;		
		printf("%d\n" ,rezult);
	}	
	}
	else
	{
		printf("error\n");
	}
   return 0;
}
	
