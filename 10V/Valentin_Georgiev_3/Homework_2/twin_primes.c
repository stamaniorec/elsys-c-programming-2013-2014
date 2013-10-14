#include<stdio.h>
   int main(){
   int twin_primes, is_prime, i, num, n;
   num=2;
   n=2;
   while(twin_primes<10){ 
      is_prime=1;
      for(i=2;i<=num/2;i++){
         if((num%i)==0){
            is_prime=0;
            break;
         }
      }   
      if(is_prime==1){
         if(num==n+2){
            printf("(%d, %d)\n",n, num);
            twin_primes++;
         }
         n=num;
      }  
      num++;
      }   
return 0;
}
