#include<stdio.h>
int main()
{
	int i,n,fp,sp,bool;
	i=0;
	for(fp=1;i<10;fp++)
	{
	n=2;
	bool=1;	
	do 
	{
	if (fp%n==0 && n!=fp) bool=0;  
	n++;
	}while (fp<n || bool==0);
	if (bool==0) continue;
	
	else  
	{
	sp=fp+2;
	bool=1;
	n=2;
	do	
	{
	if (sp%n==0 && n!=sp) bool=0;
	n++;
	}while(sp<n || bool==0);
	if (bool==1) { printf("(%d,%d)\n",fp,sp); i++; } 
	}

	}



	return 0;
}
