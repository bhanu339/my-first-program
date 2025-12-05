// write a c program for addition of two matrix
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3], c[3][3],i,j;
	printf("enter first array elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j>3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" enter second array elements:");
	for(i=0;i<3;i++)
	{ 
	for(j=0;j>3;j++)
     	{
	    	scanf(" %d",&b[i][j]);
    	}
	}
	printf(" addition of matrix");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		   c[i][j]=a[i][j]+b[i][j];
		}
	}
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",&c[i][j]);
			
		}
		printf("\n");
		
		
	}
	
}
