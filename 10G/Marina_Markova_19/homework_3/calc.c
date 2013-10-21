#include <stdio.h>
 
int main() 
{ 
	char opr[3]; 
	int a;
	int b;
	scanf("%d %s %d",&a,opr,&b);  
	if (strcmp(opr,"sub")==0){ 
		printf("%d", a-b); 
	} else
		if (strcmp(opr,"add")==0){ printf("%d", a+b); 
	} else
		if (strcmp(opr,"mul")==0){ printf("%d", a*b); 
	} else
		if (strcmp(opr,"div")==0){ 
			if (b!=0){
				printf("%d", a/b); 
			} else
				printf("error"); 
	} else
		if (strcmp(opr,"mod")==0){ 
			if (b!=0){ 
				printf("%d", a%b);  
			} else 
				printf("error"); 
	} else {
		printf ("error");
	}
	return 0; 
}
