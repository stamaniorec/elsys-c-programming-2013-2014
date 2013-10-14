#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	char p[5];
	int error = 0;
	
		printf("\nVuvedi dve chisla i mejdu tqh suotvetnoto deistvie add sub mul div ili mod: ");
		scanf("%d %s %d", &a, p, &b);

if (strcmp(p, "add") == 0) {
	c=a+b;}
	else
if (strcmp(p, "sub") == 0) {
	c=a-b;}
	else
if (strcmp(p, "mul") == 0) {
	c=a*b;}
	else
if (strcmp(p, "div") == 0) {
	c=a/b;}
	else
if (strcmp(p, "mod") == 0) {
	c=a%b;}
	else
{ error=1; printf("error\n");}

		if (error==0){
		printf("Otgovor: %d\n", c);
		}
return 0;
}
