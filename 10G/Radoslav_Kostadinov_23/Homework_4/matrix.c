# include <stdio.h>

int main() { 
int n,row,column,sum,current_element; 

//Size of matrix 
	scanf("%d",&n); 
		if (0>n>100) { printf("error\n"); } 

//Input for numbers 
int arr[n][n];
	for(row=0;row<n;row++){
	 for(column=0;column<n;column++){ 
		scanf("%d", &arr[row][column]); } 
}
 
//Summing the numbers 
	for(row=0;row<n;row++){ 
		for(column=0;column<n;column++){
			 if(row<column){ 
				sum += arr[row][column]; }
 	}
} 

//Printing the sum of the numbers above the main diagonal of the matrix 
	printf("%d\n",sum); 
return 0; 
}
