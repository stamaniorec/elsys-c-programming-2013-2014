#include <stdio.h>

int main(){

	unsigned long long first=2,second=1,lucas;
	int i;
	lucas=first+second;
	printf("%llu\n%llu\n%llu\n",first,second,lucas);
	for(i=4;i<=100;i++){
		first=second;
		second=lucas;
		lucas=first+second;
		printf("%llu\n",lucas);
	}
	return 0;
}
