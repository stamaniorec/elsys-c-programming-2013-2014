#include<stdio.h>

int main()
{
	int a;
	int b;
	int c;
	char p[5];
	int error = 0;
	
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
	if (b!=0) {
		c=a/b;}
	else { error=1; }
	}
	else
if (strcmp(p, "mod") == 0) {
	if (b!=0) {
		c=a%b;}
	else {error=1;}}
	else
{ error=1; printf("error\n");}

		if (error==0){
		printf("%d\n", c);
		}
return 0;
}
