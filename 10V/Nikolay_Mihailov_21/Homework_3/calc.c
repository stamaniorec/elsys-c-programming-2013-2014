#include<stdio.h>
#include<string.h> 
int main() 
{
	int a,b,i; 
	char c[120]; 
	//printf("Vuvedi 4islo\n");
	scanf("%d",&a);
	//Vuvedi("Vuvedi operaciq\n");
 	scanf("%s",c); 
	//printf("Vuvedi 4islo\n");
	scanf("%d",&b);
 	if(strcmp(c,"add")==0)
 	{ 
		i=a+b;
	 	printf("%d,add\n",i); 
	}
	else
 	{
 		if(strcmp(c,"sub")==0)
 		{ 
			i=a-b;
 			printf("%d,sub\n",i); 
		} 	
		else 	
		{ 
			if (strcmp(c,"mul")==0)
			{	
				i=a*b;
			 	printf("%d,mul\n",i);
 			}

			else
 			{
				if (strcmp(c,"div")==0)  
				{	
					i=a/b;
					printf("%d,div\n",i);
 				} 
				else 
				{
					if(strcmp(c,"mod")==0) 
					{
						 i=a%b;
						 printf("%d,mod\n",i);
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
