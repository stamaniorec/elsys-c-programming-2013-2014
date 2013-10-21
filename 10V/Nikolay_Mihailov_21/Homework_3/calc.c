#include<stdio.h>
#include<string.h> 
int main() 
{
	int a,b,i,booll; 
	char c[120]; 
	booll=0;
	
	scanf("%d",&a);
	
 	scanf("%s",c); 
	
	scanf("%d",&b);

	if ((strcmp(c,"mod")==0) && (b==0))
	{	
		booll=1;	
	}

	 if ((strcmp(c,"div")==0) && (b==0))
	{	
		booll=1;	
	}


								
	if(strcmp(c,"add")==0)
 	{ 
		i=a+b;
	 	printf("%d\n",i); 
	}
	else
 	{
 		if(strcmp(c,"sub")==0)
 		{ 
			i=a-b;
 			printf("%d\n",i); 
		} 	
		else 	
		{ 
			if (strcmp(c,"mul")==0)
			{	
				i=a*b;
			 	printf("%d\n",i);
 			}

			else
 			{
				if ((strcmp(c,"div")==0) && (booll!=1))  
				{	
					i=a/b;
					printf("%d\n",i);
 				} 
				else 
				{
					if((strcmp(c,"mod")==0) && (booll!=1)) 
					{
						 i=a%b;
						 printf("%d\n",i);
					}
					else 
					{
						printf("error\n");
					}
				 }
			 } 
		} 
	} 
return 0;
}
