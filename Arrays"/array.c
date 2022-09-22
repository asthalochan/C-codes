#include <stdio.h>
int main()
{
	int arr[10],n,i;
	printf("How many elements you want to add : \n");
	scanf("%d",&n);
	printf("Enter numbers : \n");
	for (i=0;i<n;i++)
		scanf(" %d",&arr[i]);
	printf("The elements are : \n[");
	for (i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("]\n");

	return 0;

}
