#include <stdio.h>

//Lucas Numbers ----- START -----
 int lucas()
{
int a=2, b=1, c=0, count=1;
for (count>0; count<=100; count++)
	{
	printf("%d. %d\n", count, a);
	c=a+b;
	a=b;
	b=c;
	}
return 0;
} 
//Lucas Numbers ----- END ------

//FUNCTION FOR CHECKING IF A NUMBER IS PRIME ----- START -----
int is_it_prime(int num)
{
int prime=0, count=1;
for (count>0; count<=num; count++)
	{
	if (num%count==0) { prime++; }
	}
if (prime==2) { return 1; }
else { return 0; }

}
//FUNCTION FOR CHECKING IF A NUMBER IS PRIME ----- END -----

//TWIN NUMBERS ----- START -----
int twins()
{
int i=1,doubles=0;

for (i>0; i<=1000; i++)
{
if (is_it_prime(i)==1) 
	{
	if (is_it_prime(i+2)==1) 
		{
		printf("%d. (%d, %d)\n", doubles+1, i, i+2);
		doubles++;
		if (doubles==10) { break; }
		}
	}

}
}
//TWIN NUMBERS ----- END -----


int main()
{
printf("LUCAS NUMBERS\n");
lucas();
printf("\n\nTWIN NUMBERS\n");
twins();
return 0;
}
