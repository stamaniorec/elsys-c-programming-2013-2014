#include<stdio.h>
#include<string.h>
int main()
{
int chislo1,chislo2,res,f=0;
char act[4];
scanf("%d %s %d",&chislo1,act,&chislo2);
if(chislo2==0)
{
f=1;
}
if(strcmp(act,"add")==0)
{
res=chislo1+chislo2;
printf("%d",res);
}
else if(strcmp(act,"sub")==0)
{
res=chislo1-chislo2;
printf("%d",res);
}
else if(strcmp(act,"mul")==0)
{
res=chislo1*chislo2;
printf("%d",res);
}
else if(strcmp(act,"div")==0)
{
if(f==1){
printf("error");
}
else
{
res=chislo1/chislo2;
printf("%d",res);
}
}
else if(strcmp(act,"mod")==0)
{
if(f==1){
printf("error");
}
else
{
res=chislo1%chislo2;
printf("%d",res);
}
}
else
{
printf("error");
		
}
return 0;
}
