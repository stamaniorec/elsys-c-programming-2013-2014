#include <stdio.h>



int main()
{
 int first,second, answer;	
 char operation[9];

 printf("Operations:\n");
 printf("add\n");
 printf("sub\n");
 printf("mul\n");
 printf("div\n");
 printf("FORMAT: first_num, operation, second_num\n");



  scanf("%d %s %d",&first,operation,&second); 
  
  if (strcmp(operation,"add")==0)
	{
		printf("Operation add\n");
		answer=first+second;
		printf("ANSWER = %d\n",answer);
	} 
   
 else	
  if (strcmp(operation,"sub")==0)
	{
		printf("Operation sub\n");
		answer=first-second;
		printf("ANSWER = %d\n",answer);
	}
 else   	
  if (strcmp(operation,"mul")==0) 
	{	
		printf("Operation mul\n");
		answer=first*second;
		printf("ANSWER = %d\n",answer);
	}
 else	
  if (strcmp(operation,"div")==0)
        {
          if (second!=0)
	{
		 printf("Operation div\n");
		 answer=first/second; 
	 	 printf("ANSWER = %d\n",answer);
	} 	
	   else printf("Operation div error - Ne se deli na 0 !\n");
        }
 else
  if (strcmp(operation,"mod")==0)
        {
          if (second!=0)
	{
		printf("Operation mod\n");
		answer=first%second;
		printf("ANSWER = %d\n", answer);
	}
	  else printf("Operation mod error\n"); 
	}  
 else printf("error !\n");
	

 return 0;
} 
