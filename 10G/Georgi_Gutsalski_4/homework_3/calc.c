# include <stdio.h> 
int main() { 
char operator; 
float num1,num2; 
printf("VYVEDI KOMANDA"); 
scanf("%c", &operator); 
printf("VYVEDI PYRVOTO I VTORO CHISLO "); 
scanf("%f%f",&num1,&num2); 
switch(operator) { 
case 
	'+': printf("num1+num2=%.2f",num1+num2); 
break; 
case 
	'-': printf("num1-num2=%.2f",num1-num2); 
break; 
case 
	'*': printf("num1*num2=%.2f",num1*num2); 
break; 
case 
	'/': printf("num2/num1 = %.2f",num1/num2); 
break; 
default: 
printf("Error!!! GRESHEN SIMVOL"); 
break; } 
return 0; 
}
