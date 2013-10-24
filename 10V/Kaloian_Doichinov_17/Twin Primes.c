#include<stdio.h>
int main(){
int t_primes,id_prime,i,num,h;
num=2;
h=2;
while(t_primes<10){
id_prime=1;
for(i=2; i<=num/2; i++){
if ((num%i)==0){
id_prime=0;
break;
}
}
if(id_prime==1){
if(num==h+2){
printf("(%d, %d)\h",h, num);
t_primes++;
}
h=num;
}
num++;
}
return 0;
}
