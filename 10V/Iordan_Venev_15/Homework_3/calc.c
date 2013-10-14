#include <stdio.h>

int main()
{
    int num1, num2;
    char operation;
    while (1) {
        scanf("%d" , &num1);
	scanf("%c" , &operation);
	scanf("%d" , &num2);
        if (operation == '+')
            printf("%d\n", num1+num2);
	else printf("error");
	break;
        if (operation == '-')
            printf("%d\n", num1-num2);
	else printf("error");
	break;
        if (operation == '*')
            printf("%d\n", num1*num2);
	else printf("error");
	break;
        if (operation == '/')
            printf("%d\n", num1/num2);
	else printf("error");
	break;
    }
    return 0;
}
