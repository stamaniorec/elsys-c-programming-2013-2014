#include <stdio.h>



int lucas_numbers(int n);
int twin_primes(int n);



int main(){
	printf("Lucas numbers:\n");
	lucas_numbers(100);
	printf("\nTwin primes:\n");
	twin_primes(10);
 return 0;
}


int lucas_numbers(int n){
 unsigned long preprevious_number=2,previous_number=1,current_number;
 int i;
	printf("N#1=2\n");
	printf("N#2=1\n");
	for (i=3;i<=n;i++){
		current_number=preprevious_number+previous_number;
		printf("N#%d=%lu\n",i,current_number);
		preprevious_number=previous_number;
		previous_number=current_number;
	}		
}


int twin_primes(int n){
 int del,printed_twin_primes=1,prime=3,twin_prime=3,flag_prime;  

	while (printed_twin_primes<=n){
		flag_prime=1;
		for (del=2;del<=prime/2;del++){
			if (prime % del==0){
		     		flag_prime=0;
		     		break;
		  	}
		}
		if (flag_prime==1){
			if (prime==twin_prime+2){
		   		printf("(%d,%d)\n",twin_prime,prime);
		   		printed_twin_primes++;
			}
			twin_prime=prime;
		}
		prime++;		
	}

}


