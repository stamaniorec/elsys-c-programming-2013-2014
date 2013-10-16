#include<stdio.h>
#include<string.h>
int main(){
	int num1,num2,result;
	char operation[4];
	scanf("%d %s %d",&num1,operation,&num2);
	if(strcmp(operation,"add")==0){
		result=num1+num2;
		printf("%d",result);
	}
	else if(strcmp(operation,"sub")==0){
		result=num1-num2;
		printf("%d",result);
	}
	else if(strcmp(operation,"mul")==0){
		result=num1*num2;
		printf("%d",result);
	}
	else if(strcmp(operation,"div")==0){
		if(num2==0){
			printf("error");
		}
		else{
		result=num1/num2;
		printf("%d",result);
	}
	}
	else if(strcmp(operation,"mod")==0){
		if(num2==0){
			printf("error");
		}
		else{
		result=num1%num2;
		printf("%d",result);
	}
	}
	else{
		printf("error");
		
	}

	return 0;
}
