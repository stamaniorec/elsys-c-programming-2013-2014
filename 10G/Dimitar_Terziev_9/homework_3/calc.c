#include<stdio.h>
int main () {
	int chislo1, chislo2, izhod;
	char znak [3];
	scanf("%d", &chislo1);
	scanf("%s", znak);
	scanf("%d", &chislo2);
	if (strcmp (znak,"add")==0) {
		izhod = chislo1 + chislo2;
		printf("%d\n", izhod);
	} else {
		if (strcmp (znak,"sub")==0){
			izhod = chislo1 - chislo2;
			printf("%d\n", izhod);
		}
		if (strcmp (znak,"mul")==0){
			izhod = chislo1 * chislo2;
			printf("%d\n", izhod);
		}
		if (strcmp (znak,"div")==0){
			izhod = chislo1 / chislo2;
			printf("%d\n", izhod);
		}
		if (strcmp (znak,"mod")==0){
			izhod = chislo1 % chislo2;
			printf("%d\n", izhod);
		}
	}
	if (strcmp (znak,"add")!=0 && strcmp (znak,"sub")!=0 && strcmp (znak,"mul")!=0 && strcmp (znak,"div")!=0 && strcmp (znak,"mod")!=0) {
		printf("error\n");
	}
return 0;
}
