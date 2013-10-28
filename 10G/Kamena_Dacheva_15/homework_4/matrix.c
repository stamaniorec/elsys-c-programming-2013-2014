#include <stdio.h>


int main()
{
 int sum, row, col, n;

 scanf("%d",&n);
 sum=0;
 int mat[n][n];

  if (n<=100)
  {
   for (row=1; row<=n; row++)
   {
    for (col=1; col<=n; col++)
    {scanf ("%d", &mat[row][col]);}
   }

   for (row=1; row<=n; row++)
   {
    for (col=2; col<=n; col++)
    {
     if (row<col) {sum=sum+mat[row][col];} 
    }   
   }
  
   printf("%d\n", sum);
  }
  else printf ("error\n");

return 0;
}
