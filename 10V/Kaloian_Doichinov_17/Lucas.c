# include <stdio.h>
int main()
{
char operator;
float chislo1,chislo2;
printf("Vuvedi 1-voto chislo");
scanf("%f",&chislo1);
printf("Vyvedi znak za operaciq (+ - * /)");
scanf("%c",&operator);
printf("Vuvedi 2-roto chislo");
scanf("%f",&chislo2);
switch(operator)
{
case '+':
printf("chislo1+chislo2=%.2f",chislo1+chislo2);
break;
case '-':
printf("chislo1-chislo2=%.2f",chislo1-chislo2);
break;
case '*':
printf("chislo1*chislo2=%.2f",chislo1*chislo2);
break;
case '/':
printf("chislo1/chislo2 = %.2f",chislo1/chislo2);
break;
default:
printf("Error!");
break;
}
return 0;
}
