#include <stdio.h>
#include <string.h>

int add(int f, int s);
int sub(int f, int s);
int mul(int f, int s);
int div(int f, int s);
int mod(int f, int s);


int main() {

	char opp[3];
	int f, s;

	scanf("%d %s %d", &f, opp, &s);

	if (strcmp(opp, "add") == 0) printf("%d \n", add(f, s));
			else
			if (strcmp(opp, "sub") == 0) printf("%d \n", sub(f, s));
				else
				if (strcmp(opp, "mul") == 0) printf("%d \n", mul (f, s));
					else
					if (strcmp(opp, "div") == 0)
						{
							if (s) printf("%d \n", div(f, s));
								else
								printf("error \n");
						}
						else
						if (strcmp(opp, "mod") == 0)
							{
								if (s)
								printf("%d \n", mod(f, s));
									else
									printf("error \n");
							}
								else
								printf ("error \n");	

	return 0;
}


int add(int f, int s)
{
    return(f + s);
}

int sub(int f, int s)
{
    return(f - s);
}

int mul(int f, int s)
{
    return(f, s);
}

int div(int f, int s)
{
    return(f / s);
}

int mod(int f, int s)
{
    return(f % s);
}
