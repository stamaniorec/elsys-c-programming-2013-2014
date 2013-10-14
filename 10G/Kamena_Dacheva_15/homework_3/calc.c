#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[])
{
 int a, b, c, boolean;
 char str[5];

 scanf ("%d%s%d", &a, str, &b);
 boolean=0;
 c=0;

 if (!strcmp(str, "add")) {c=a+b; boolean=1; printf ("%d\n", c);}
 if (!strcmp(str, "sub")) {c=a-b; boolean=1; printf ("%d\n", c);}
 if (!strcmp(str, "mul")) {c=a*b; boolean=1; printf ("%d\n", c);}
 if (!strcmp(str, "div")) {if (b!=0) 
	{
	 c=a/b; boolean=1; printf ("%d\n", c);}
	}
 if (!strcmp(str, "mod")) {if (b!=0) 
	{
	 c=a%b; boolean=1; printf ("%d\n", c);}
	}

 if (boolean==0) printf ("error\n");
 return 0;
}





