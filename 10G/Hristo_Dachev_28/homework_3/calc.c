#include <stdio.h>

int main(){
	
	int a,b,c;
	char ch[3];
	
	scanf("%d %s %d", &a,ch,&b);
	
	if (strcmp(ch, "add")==0){
		c=a+b;
		printf("%d\n",c);
	}
	else{
		if (strcmp(ch,"sub")==0){
			c=a-b;
			printf("%d\n",c);
		}
		else{
			if (strcmp(ch,"mul")==0){
				c=a*b;
				printf("%d\n",c);
			}
			else{
				if (b!=0)
					if (strcmp(ch,"div")==0){
						c=a/b;
						printf("%d\n",c);
					}
					else{
						if (strcmp(ch,"mod")==0){
							c=a%b;
							printf("%d\n",c);
						}
						else printf ("error\n");
					}
				else printf("error\n");
			}
		}
	}	
	
	
	return 0;
}
	
