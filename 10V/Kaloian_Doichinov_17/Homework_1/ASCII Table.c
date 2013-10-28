#include<stdio.h>
     
    int main() {
    unsigned long int l1, l2, l3;
    int i;
    l3=0;
    l1=2;
    l2=1;
    printf("%d - %lu\n",1, l1);
    printf("%d - %lu\n",2, l2);
     
    for(i=3; i<=100; i++) {
    l3=l1+l2;
     
    printf("%d - %lu\n",i, l3);
    l1=l2;
    l2=l3;
    }
    return 0;
    } 
