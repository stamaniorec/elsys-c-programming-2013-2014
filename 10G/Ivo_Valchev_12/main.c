#include<stdio.h>

int main()
{
   unsigned long long first = 2, second = 1, next;
   int c;

   for ( c = 0 ; c < 100 ; c++ )
   {
        if(c==0){
            printf("%u\t",first);
        }else if(c==1){
            printf("%u\t",second);
        }else{
            next = first + second;
            first = second;
            second = next;
            printf("%u\t",next);
        }
   }

   return 0;
}
