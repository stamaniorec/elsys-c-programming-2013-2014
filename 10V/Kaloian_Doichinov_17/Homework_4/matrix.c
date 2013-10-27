#include <stdio.h>

int main()
{
        int a,row,column;
        float matrix[100][100],sum=0;

        scanf("%d",&a);
        if (a<=100) {
                for (row=0; row<=n-1; row++) {
                        for (column=0; column<=a-1; column++) {
                                scanf("%f",&matrix[row][column]);
                                if (column>row) sum +=matrix[row][column];
                        }
                }        
                printf("%f",sum);
        } else {
                printf("Error");
        }
        
        return 0;
}
