#include <stdio.h>
int main()
{
	int arr[10],n,i;
	int max,min;
	printf("How many elements you want to add : \n");
	scanf("%d",&n);
	printf("Enter numbers : \n");
	for (i=0;i<n;i++)
		scanf(" %d",&arr[i]);
	printf("The elements are : \n[");
	for (i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("]\n");
	max=arr[0];
	min=arr[0];
	for (i=0;i<n;i++)
	{
		if (max<arr[i])
			max=arr[i];
		else if (min>arr[i])
			min=arr[i];
	}
	printf("Maximum number out of the array is %d.\n",max);
	printf("Minimum number out of the array is %d.\n",min);
	return 0;

}
