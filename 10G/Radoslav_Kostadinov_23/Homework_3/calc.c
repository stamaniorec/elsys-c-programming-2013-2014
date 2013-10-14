#include <stdio.h>
#include <string.h>

int main (int argc, char* argv[])
{ 

int a, b, c, f;
char str[3];
scanf ("%d %s %d", &a, str, &b);
f=0;
c=0;

if (!strcmp(str, "add" )) 
{
c=a+b; f=1; printf ("When you add %d to %d the result is %d\n", b , a , c); 
}

if (!strcmp(str, "sub" )) {
c=a-b; f=1; printf ("When you subtract %d from %d the result is %d\n", b , a , c);
}

if (!strcmp(str, "mul" )) {
c=a*b; f=1; printf ("When you multiply %d to %d the result is %d\n", b , a , c);
}

if (!strcmp(str, "div" )) {
if (b!=0) 
 {
  c=a/b; f=1; printf ("When you divide %d to %d the result is %d\n", a , b , c);
}
 }

if (!strcmp(str, "mod")) {if (b!=0) 
 {
  c=a%b; f=1; printf ("%d\n", c);} 
}

if (f == 0) printf ("error\n");


return 0;
} 
