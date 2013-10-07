#include <stdio.h>

int main(){

  int i=1,z,n=1,a,x,y,j;
  while(n<=10){
    do{  
      i++;
      a=1;
      for(j=2;j<=i/2;j++){
        if(i%j==0) {
			a=0;break;
			}
      }
    }
    while(a==0);
    x=i;
    y=x+2;
    if(a==1){
      for(z=2;z<=i;z++){
        if(y%z==0) a=0;
      }
      if (a==1){
        printf("(%d;%d)\n",x,y);
        n++;
      }
    }
  }
  return 0;
}
