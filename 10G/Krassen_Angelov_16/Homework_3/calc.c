#include <stdio.h>
/* Programa kalkulator*/
int main()
{
	int a,b;
	char c[10];

		scanf("%d %s %d",&a,c,&b);   

		if (strcmp(c,"add")==0) 
			printf("%d\n", a+b);
		else if (strcmp(c,"sub")==0) 
			printf("%d\n", a-b);
		else if (strcmp(c,"mul")==0) 
			printf("%d\n", a*b);
		else if (strcmp(c,"div")==0) 
			printf("%d\n", a/b); 
		else if (strcmp(c,"mod")==0)
			printf("%d\n", a%b); 
		else printf("error");
          
return 0;
} 		
