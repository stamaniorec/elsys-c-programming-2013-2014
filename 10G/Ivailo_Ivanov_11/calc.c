gcc#include<stdio.h>
#include<string.h>
int main(){
int chislo1,chislo2,x;
char c[4];
printf("enter of the operations: add,sub,mul,div,mod\n");
scanf("%d %s %d",&chislo1,c,&chislo2);
if(strcmp(c,"add")==0){
x=chislo1+chislo2;
printf("answer: %d",x);
}
else if(strcmp(c,"sub")==0){
x=chislo1-chislo2;
printf("answer: %d",x);
}
else if(strcmp(c,"mul")==0){
x=chislo1*chislo2;
printf("answer: %d",x);
}
else if(strcmp(c,"div")==0){
if(chislo2==0){
printf("error:");
}
else{
x=chislo1/chislo2;
printf("answer: %d",x);
}
}
else if(strcmp(c,"mod")==0){
if(chislo2==0){
printf("error");
}
else{
x=chislo1%chislo2;
printf("answer: %d",x);
}
}
else{
printf("error");

}

return 0;
}
