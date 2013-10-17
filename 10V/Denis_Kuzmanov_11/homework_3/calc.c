#include <stdio.h>



int main()
{

	 int first,second, answer;        
	 char operation[9];




  scanf("%d %s %d",&first,operation,&second);
  
  if (strcmp(operation,"add")==0)
        {
                answer=first+second;
                printf("%d",answer);
        }
   
 else        
  if (strcmp(operation,"sub")==0)
        {
              
                answer=first-second;
                printf("%d",answer);
        }
 else         
  if (strcmp(operation,"mul")==0)
        {        
                
                answer=first*second;
                printf("%d",answer);
        }
 else        
  if (strcmp(operation,"div")==0)
        {
          if (second!=0)
        {
                 
                 answer=first/second;
                  printf("%d",answer);
        }         
         else printf("error");
        }
 else
  if (strcmp(operation,"mod")==0)
        {
          if (second!=0)
        {
                
                answer=first%second;
                printf("%d", answer);
        }
         else printf("error");
        }
 else printf("error");
        

 return 0;
}