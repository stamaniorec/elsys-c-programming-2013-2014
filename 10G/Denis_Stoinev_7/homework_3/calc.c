#include <stdio.h>
#include <string.h>

int main() {
	char operaciq[4];
	int a;
	int b;
	int Rezultat;
 	    
	    printf("a=");
	    scanf("%d" ,&a);
	    printf("Izberete operaciq:add,sub(izvajda b ot a),mul,div ili mod?\n");
	    scanf("%s" ,operaciq);
	    printf("b=");
	    scanf("%d" ,&b);
		
	if (strcmp(operaciq,"add")==0)
	{
		Rezultat=a+b;
		printf("a+b=");		
		printf("%d\n" ,Rezultat);
	}
	else if (strcmp(operaciq,"sub")==0)
	{
		Rezultat=b-a;
		printf("b-a=");		
		printf("%d\n" ,Rezultat);
	}
	else if (strcmp(operaciq,"mul")==0)
	{
		Rezultat=a*b;
		printf("a*b=");		
		printf("%d\n" ,Rezultat);
	}
	 else if (strcmp(operaciq,"div")==0)
	{
		Rezultat=a/b;
		printf("a/b=");		
		printf("%d\n" ,Rezultat);
	}
	else if (strcmp(operaciq,"mod")==0)
	{
		Rezultat=a%b;
		printf("a mod b=");		
		printf("%d\n" ,Rezultat);
	}
	else
	{
		printf("error\n");
	}
   return 0;
}
	
