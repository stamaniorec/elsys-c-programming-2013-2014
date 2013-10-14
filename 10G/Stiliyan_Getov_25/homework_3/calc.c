#include<stdio.h>
#include<string.h>

int main()
{
int ch1,ch2,resultat,c=0;
char act[4];
scanf("%d %s %d",&ch1,act,&ch2);
if( ch2==0 )
{
c=1;
}
if(strcmp(act,"add")==0){
resultat=ch1+ch2;
printf("%d\n",resultat);
}
else if(strcmp(act,"sub")==0){
resultat=ch1-ch2;
printf("%d\n",resultat);
}
else if(strcmp(act,"mul")==0){
resultat=ch1*ch2;
printf("%d\n",resultat);
}
else if(strcmp(act,"div")==0){
if(c==1){
printf("error");
}
else
{
resultat=ch1/ch2;
printf("%d\n",resultat);
}
}
else if(strcmp(act,"mod")==0)
{
if(c==1){
printf("error");
}
else
{
resultat=ch1%ch2;
printf("%d\n",resultat);
}
}
else
{
printf( "error" );		
}
return 0;
}
