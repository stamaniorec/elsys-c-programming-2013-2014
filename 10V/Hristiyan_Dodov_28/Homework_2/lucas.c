#include <stdio.h>

int main(){

	long i=2;  //ako i=0, shte izleznat chislata na fibonachi ._.
	long i2=1;
	long i3;
	int n;
	int b=0;
	
	int n_max=100;
	
	printf("%ld\n%ld\n", i, i2);
	for(n=2; n<n_max; n++){
	
		i3=i+i2;
	
		if (b==0){
			b=1;
			i=i3;
		}else{
			b=0;
			i2=i3;
		}
		
		printf("%ld\n", i3);
	
	}
	
	return 0;
}
