#include<stdio.h>
#include<string.h>
int main () {
	int chislo1, chislo2, izhod;
	char znak [4];
	scanf("%d", &chislo1);
	scanf("%s", znak);
	scanf("%d", &chislo2);
	if (strcmp (znak,"add")==0) {
		izhod = chislo1 + chislo2;
		printf("%d", izhod);
	} else {
		if (strcmp (znak,"sub")==0){
			izhod = chislo1 - chislo2;
			printf("%d", izhod);
		}
		if (strcmp (znak,"mul")==0){
			izhod = chislo1 * chislo2;
			printf("%d", izhod);
		}
		if (strcmp (znak,"div")==0){
			if (chislo2!=0) {
				izhod = chislo1 / chislo2;
				printf("%d", izhod);
			} else {
				printf("error");
			}
		}
		if (strcmp (znak,"mod")==0){
			if (chislo2!=0) {
				izhod = chislo1 % chislo2;
				printf("%d", izhod);
			} else {
				printf("error");
			}
		}
	}
	if (strcmp (znak,"add")!=0 && strcmp (znak,"sub")!=0 && strcmp (znak,"mul")!=0 && strcmp (znak,"div")!=0 && strcmp (znak,"mod")!=0) {
		printf("error");
	}
return 0;
}
