#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0;
    char operand[256];
    scanf("%d %s %d", &a,operand, &b);

    if(!strcmp(operand,"add")){
        a+=b;
        printf("%d\n",a);
    }else if (!strcmp(operand,"sub")){
        a-=b;
        printf("%d\n",a);
    }else if (!strcmp(operand,"mul")){
        a*=b;
        printf("%d\n",a);
    }else if (!strcmp(operand, "div") && b!=0){
        a/=b;
        printf("%d\n",a);
    }else if(!strcmp(operand, "mod") && b!=0){
        a%=b;
        printf("%d\n",a);
    }else{
        printf("error");
    }

    return 0;
}
