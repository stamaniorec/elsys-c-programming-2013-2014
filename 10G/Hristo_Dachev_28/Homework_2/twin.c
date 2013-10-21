#include <stdio.h>

int main(){

	int i,j,n,boolean,a,b,g;
	n=1;
	i=1;
	while(n<=10){
		do{	
			i++;
			boolean=1;
			for(g=2;g<=i/2;g++){
				if(i%g==0) {boolean=0;break;}
			}
		}
		while(boolean==0);
		a=i;
		b=a+2;
		if(boolean=1){
			for(j=2;j<=i;j++){
				if(b%j==0) boolean=0;
			}
			if (boolean==1){
				printf("(%d;%d)\n",a,b);
				n++;
			}
		}
	}
	return 0;
}
