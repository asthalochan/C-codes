#include <stdio.h>
int main()
{
	int arr[10][10],r,c,i,j,sum=0;
	printf("How many rows you want to add : \n");
	scanf("%d",&r);
	printf("How many columns you want to add : \n");
	scanf("%d",&c);
	printf("Enter numbers : \n");
//Input Block
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			scanf(" %d",&arr[i][j]);
	}
//Display Block
	printf("The input %d x %d matrix is :\n",r,c);
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			printf(" %d",arr[i][j]);
		printf("\n");
	}
//Diaginal sum
	if(r!=c)
	{
		printf("The input matrix is not a square matrix , so sum is not possible.");
	}
	else 
	{
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if (i>j)
			arr[i][j]=0;
		}
	}
	}
//Display Block
	printf("The upper triangular matrix for the input matrix is :\n");
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
			printf(" %d",arr[i][j]);
		printf("\n");
	}
	return 0;

}
