#include<stdio.h>

void print(){
    printf("HI!");
}

int main()
{
   int i;
   int j;
   int twinArr[10];
   int counter = 0;
   int simple;
   for(i = 1; i < 10; i++){
       simple = 1;
       j=2;
       while(simple==1 && j<i){
            if(i % j ==0){
                simple = 0;
            }
            j++;
       }

       if(simple==1){
            twinArr[counter] = i;
            counter++;
       }
   }

   for(i = 0; i < counter-1; i++){
        printf("(%d,%d)",twinArr[i],twinArr[i+1]);
   }

   return 0;
}
