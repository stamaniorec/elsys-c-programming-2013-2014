#include <stdio.h>

int main(void){

   int n, i, j;
   float sum=0;

   scanf("%d", &n);
   if(n>=2 && n<=100){
      float m[n][n];
      for(i=0; i<n; i++){
         for(j=0; j<n; j++){
            scanf("%f", &m[i][j]);
            if(j>i) sum+=m[i][j];
         }
      }
   printf("%f\n", sum); 
   }

return 0;
}

