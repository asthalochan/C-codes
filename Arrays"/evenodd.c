#include <stdio.h>
int main()
{
	int arr[10],n,i;
	int counte=0,counto=0;
	printf("How many elements you want to add : \n");
	scanf("%d",&n);
	printf("Enter numbers : \n");
	for (i=0;i<n;i++)
		scanf(" %d",&arr[i]);
	printf("The elements are : \n[");
	for (i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("]\n");
	printf("The even numbers are : \n");
	for (i=0;i<n;i++)
	{
		if (arr[i]%2==0)
			printf("%d \n",arr[i]);
			//counte++;
		//else 
						
			//counto++;
	}
	printf("The odd numbers are : \n");
	for (i=0;i<n;i++)
	{
		if (arr[i]%2!=0)
			printf("%d \n",arr[i]);
	}
	//printf("Total number of even elements are %d.\n",counte);
	//printf("Total number of odd elements are %d.\n",counto);
	return 0;

}
