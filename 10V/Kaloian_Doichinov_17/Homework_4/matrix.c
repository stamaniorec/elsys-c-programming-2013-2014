#include <stdio.h>

int main()
{
        int a,row,colum;
        float matrix[100][100],sum=0;

        scanf("%d",&a);
        if (a<=100) {
                for (row=0; row<=n-1; row++) {
                        for (colum=0; colum<=a-1; colum++) {
                                scanf("%f",&matrix[row][colum]);
                                if (colum>row) sum +=matrix[row][colum];
                        }
                }        
                printf("%f",sum);
        } else {
                printf("Error");
        }
        
        return 0;
}

