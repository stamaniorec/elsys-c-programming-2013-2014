#include <stdio.h>



int main()
{
 int number_1,number_2;
 char operation[7];

	scanf("%d %s %d",&number_1,operation,&number_2); 
	
	if (strcmp(operation,"add")==0) printf("%d", number_1+number_2);
	 else 
	  if (strcmp(operation,"sub")==0) printf("%d", number_1-number_2);
	   else
	    if (strcmp(operation,"mul")==0) printf("%d", number_1*number_2);
	     else
	      if (strcmp(operation,"div")==0)
	      {
			if (number_2!=0) printf("%d", number_1/number_2); 
			 else
			printf("error");
	      }
	       else
	        if (strcmp(operation,"mod")==0)
	        {
			  if (number_2!=0) printf("%d", number_1%number_2); 
			   else
			  printf("error");
	        }
	         else
	          printf ("error");	
	
 
 return 0;
}
