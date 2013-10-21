#include <stdio.h>

int main(){
	
	int i=0;
	unsigned long long f1=2;
	unsigned long long f2=1;
	while(i<100){
		printf("%llu\n%llu\n", f1,f2);
		f1=f1+f2;
		f2=f1+f2;		
		i+=2;
	}
	return 0;
}
