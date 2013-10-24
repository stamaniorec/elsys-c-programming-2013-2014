#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int current_element;
    int i,j;
    int sum = 0;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            scanf("%d", &current_element);
            if(j>i){
                sum+=current_element;
            }
        }
    }

    printf("%d",sum);

    return 0;
}
