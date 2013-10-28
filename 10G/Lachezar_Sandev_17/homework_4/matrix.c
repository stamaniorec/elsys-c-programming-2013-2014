#include <stdio.h>

int main(){
	int sum=0, j, column, m;
	scanf("%d",&m);
 	int arr[m][m];

  if (m<=100 && m>0){
   for (j=0; j<m; j++)
   {
    for (column=0; column<m; column++)
    {scanf ("%d", &arr[j][column]);}
  }
  
  for (j=0; j<m; j++){
    for (column=0; column<m; column++){
     if (j<column) 

	sum += sum+arr[j][column];}
    	}   
    
  printf("%d\n", sum);}
  else {
	printf ("error\n");
}

return 0;
}
