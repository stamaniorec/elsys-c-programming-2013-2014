#include <stdio.h>

int prime(int i);

int main(){

	int i = 1;
	int i_plus;
	int n=0;
	int n_max=10;
	
	for (i; i>0; i++){
	
		i_plus=i+2;
		
		if (prime(i)==0 && prime(i_plus)==0){
			printf("(%d, %d)\n", i, i_plus);
			n=n+1;
			
			if (n==n_max){
				break;
			}
		}
	}
	
	return 0;

}


/*Tazi funkciq proverqva dali dadenoto chislo i e prosto*/
int prime(int i){

	int b=1;
	int i2;
	int d=0;
	
	for(i2=1; i2<=i; i2++){	
		
		if (i%i2==0){
			d++;
			if (d>2){
				break;
			}
		}
	}
	
	if (d==2){
		b=0;
	}
	/* pri d==2 se razbira, che e imalo samo dve uspeshni deleniq (i%1 i i&i), toest
	chisloto e prosto*/
		
	return b;
}
/*--------------------------*/
