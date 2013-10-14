#include<stdio.h>
#include<string.h>
int main()
{
int f,g,h;
char ur[120];
scanf("%d",&f);
scanf("%s",ur);
scanf("%d",&g);
if(!strcmp(ur,"add"))
{
h=f+g;
printf("%d\n",h);
}
else
{
if(!strcmp(ur,"sub"))
{
h=f-g;
printf("%d\n",h);
}
else
{
if (!strcmp(ur,"mul"))
{
h=f*g;
printf("%d\n",h);
}
else
{
 if (!strcmp(ur,"div")) {
           h=f/g;
           printf("%d\n",h);
}
else
{ 
if(!strcmp(ur,"mod"))
{
h=f%g;
printf("%d\n",h);
}
else
{
printf("error\n");
}
}
}
}
}
return 0;
}
