#include<stdio.h>
int main() 
{

int broi=0;
int x;
int pred_number=2;
int number=2;
int f; 

  while(broi<10){ 
  f=0;
  	for(x=2; x<=number/2; x++){
    		if(number%x==0){
    			f=1;
  			break;
    			}
  		}
  if(f==0){

    if(number==pred_number+2){

     printf("%d - ",pred_number);
     printf("%d\n",number);
     broi++;
    }
     pred_number=number;  
        }
      number++;
  }
return 0;
} 
