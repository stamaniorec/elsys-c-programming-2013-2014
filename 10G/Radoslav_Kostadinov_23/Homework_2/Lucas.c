#include <stdio.h>

int main(){
	int n;
long long x=2;
long long y=1;
long long l;

	for ( n = 0; n <= 100; n++ ){
	printf(" %lld\n",x);
	l=x+y;
	x=y;
	y=l;
}
return 0;

}
