#include <stdio.h>
#include <stdlib.h>

int main() {

    int i,n,z,s=0,ce;
    
    scanf("%d",&n);
    
    	    for(i=1;i<=n;i++){
    	    
        	for(z=1;z<=n;z++){
        	
        	    scanf("%d", &ce);
        	    
        	      if(z>i){
        	      
        	        s=ce+s;
        	      }
     	        }
       	    }

    printf("%d\n",s);

return 0;
}
