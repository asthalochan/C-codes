#include <stdio.h>
int main()
{
	int arr1[10][10],arr2[10][10],arr3[10][10],r1,c1,r2,c2,i,j;
//Matrix 1 block
	printf("How many rows you want to add for matrix 1 : \n");
	scanf("%d",&r1);
	printf("How many columns you want to add for matrix 1 : \n");
	scanf("%d",&c1);
	printf("Enter numbers : \n");
//Input Block
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
			scanf(" %d",&arr1[i][j]);
	}
//Matrix 2 block
	printf("How many rows you want to add for matrix 2 : \n");
	scanf("%d",&r2);
	printf("How many columns you want to add for matrix 2 : \n");
	scanf("%d",&c2);
	printf("Enter numbers : \n");

//Input block
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
			scanf(" %d",&arr2[i][j]);
	}
//Display Block
//Matrix 1
	printf("The input %d x %d matrix is :\n",r1,c1);
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
			printf(" %d",arr1[i][j]);
		printf("\n");
	}
//Matrix 2
	printf("The input %d x %d matrix is :\n",r2,c2);
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
			printf(" %d",arr2[i][j]);
		printf("\n");
	}
//Sum of matrix
	if (r1==r2 && c1==c2)
	{
		for (i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
				arr3[i][j]=arr1[i][j]+arr2[i][j];
		}
		printf("The addition of two matrices is :\n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
				printf(" %d",arr3[i][j]);
			printf("\n");
		}
	}
	if(r1!=r2 || c1!=c2)
	printf("Sorry Addition is not supported for different dimensions of two matrices\n");
	return 0;

}
