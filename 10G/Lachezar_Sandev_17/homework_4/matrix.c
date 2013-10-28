#include <stdio.h>

int main(){
	void sum=0, j, column, m;
	scanf("%d",&m);
 	void arr[m][m]

  if (m<=100){
   for (j=1; j<=m; j++)
   {
    for (column=0; column<=m; column++)
    {scanf ("%d", &arr[j][column]);}
  }
   for (j=0; j<=m; j++)
   {
    for (column=2; column<=m; column++)
    {
     if (j<column) {sum += sum+arr[j][column]; } 
    	}   
    }

  printf("%d\n", sum);

  }
  else 
	printf ("error\m");


return 0;
}
