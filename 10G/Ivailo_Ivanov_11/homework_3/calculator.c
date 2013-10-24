#include<stdio.h>
#include<string.h>
int main(){
  int num1,num2,x;
  char c[4];
  scanf("%d %s %d",&num1,c,&num2);

        if(strcmp(c,"add")==0){
        x=num1+num2;
        printf("%d",x);
        }
        
        else if(strcmp(c,"sub")==0){
        x=num1-num2;
        printf("%d",x);
        }
        
        else if(strcmp(c,"mul")==0){
        x=num1*num2;
        printf("%d",x);
        }
        
        else if(strcmp(c,"div")==0){
        if(num2==0){
        printf("error");
        }
        
        else{
        x=num1/num2;
        printf("%d",x);
        }
        }
        
        else if(strcmp(c,"mod")==0){
        if(num2==0){
        printf("error");
        }
        
        else{
        x=num1%num2;
        printf("%d",x);
        }
        }
        
        else{
        printf("error");
        
        }
        
        return 0;
        }
