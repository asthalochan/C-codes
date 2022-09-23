#include <stdio.h>
int main()
{
	int arr[10][10],r,c,i,j;
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
	return 0;

}
