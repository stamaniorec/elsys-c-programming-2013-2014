#include "stdio.h"

int main() {
int i, d, result;
for(i=3; i<100; i++) {
result = 0;
for(d=2; d<i; d++) {
if(!(i%d)) {
result++;
break;
}
}
if(!result) {
printf("%d\n", i);
}
}
return 0;
}
