#include<stdio.h>
int main () {
	unsigned long long lucchis1=2, lucchis2=1;
	int broqch=2, zamestitel=1;
	printf("%llu-%d\n%llu-%d\n", lucchis1, 1, lucchis2, 2);
	while (broqch<100) {
			broqch++;
			if (zamestitel==1) {
				lucchis1=lucchis1+lucchis2;
				printf("%llu-%d\n", lucchis1, broqch);
			}else {
				if (zamestitel==2){
					lucchis2=lucchis1+lucchis2;
					printf("%llu-%d\n", lucchis2, broqch);
				}			
			}
/*prints wrong past the 92nd lucas number - unsigned long long is too short for more*/
		switch (zamestitel) {
			case 1 :  
				zamestitel++;
				break;
			case 2 : 
				zamestitel--;
				break;
			default : 
				printf("problem");
		}
	}
return 0;
}

