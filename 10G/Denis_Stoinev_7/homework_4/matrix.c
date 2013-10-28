#include <stdio.h>

int main ()
{

   int r,c,n;
   int sumo=0;
        
    scanf("%d",&n);
   
   int arry[n][n];
     
	if(n>0 && n<=100)
{
	for(r=0;r<n;r++)
{
	for(c=0;c<n;c++)
{
     scanf("%d",&arry[r][c]);
}
}
	   for(r=0;r<n;r++)
{
	   for(c=0;c<n;c++)
{
	if(c>r)
{
	      sumo=sumo+arry[r][c];
}
}
}
     printf("%d\n",sumo);
}
	else
{
	printf("error");
}
   return 0;
}  
