 #include <stdio.h>

int main()

{
int i;
char r=0;

for (i>=0; i<=256; i++) 
	{ 
	r++;
	printf ("%c ~ %d\n", r,i); 
	}

return(0);
}
