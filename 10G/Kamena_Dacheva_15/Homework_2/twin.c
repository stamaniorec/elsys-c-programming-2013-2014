#include <stdio.h>

int main()
{
 int i, j, p1, p2, l;
 int boolean;
 p1=0;
 p2=0;
 l=0;
 while ((p1==0) || (p2==0))
 {
	
	for (i=1; i<=1000; i++)
	{	
	boolean = 1;
	for (j=2; j<=i/2; j++)
	{
		if (i%j==0)
		{
			boolean=0;
		}
	}
	if (boolean == 1)
	{
	 p2=i;
	}
 	 if ((p2-p1==2) && (l<10))
	{
 	 printf ("(%d;%d)\n",p1,p2);
	 l++; 
	}
 	p1=p2;	
 	}
 }
return 0;
}	
