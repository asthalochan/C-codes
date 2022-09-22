#include <stdio.h>
int main()
{
	int arr[10],n,i,sum=0;
	float avg;
	printf("How many elements you want to add : \n");
	scanf("%d",&n);
	printf("Enter numbers : \n");
	for (i=0;i<n;i++)
		scanf(" %d",&arr[i]);
	printf("The elements are : \n[");
	for (i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("]\n");
	for (i=0;i<n;i++)
		sum=sum+arr[i];
	avg=sum/n;
	printf("The average of the elements is %f :\n",avg);

	return 0;

}
