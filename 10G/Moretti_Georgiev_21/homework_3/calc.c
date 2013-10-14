#include<stdio.h>
#include<string.h>
int main(){
	int num1,num2,a;
	char c[4];
	printf("enter of the operations: add,sub,mul,div,mod\n");
	scanf("%d %s %d",&num1,c,&num2);
	if(strcmp(c,"add")==0){
		a=num1+num2;
		printf("answer: %d",a);
	}
	else if(strcmp(c,"sub")==0){
		a=num1-num2;
		printf("answer: %d",a);
	}
	else if(strcmp(c,"mul")==0){
		a=num1*num2;
		printf("answer: %d",a);
	}
	else if(strcmp(c,"div")==0){
		if(num2==0){
			printf("error:");
		}
		else{
		a=num1/num2;
		printf("answer: %d",a);
	}
	}
	else if(strcmp(c,"mod")==0){
		if(num2==0){
			printf("error");
		}
		else{
		a=num1%num2;
		printf("answer: %d",a);
	}
	}
	else{
		printf("error");
		
	}

	return 0;
}
