#include <stdio.h>
int main()
{
	int arr[10],n,i,val,flag = 0;
	printf("How many elements you want to add : \n");
	scanf("%d",&n);
	printf("Enter numbers : \n");
	for (i=0;i<n;i++)
		scanf(" %d",&arr[i]);
	printf("The elements are : \n[");
	for (i=0;i<n;i++)
		printf("%d\t",arr[i]);
	printf("]\n");
	printf("Enter the value you want to search : \n");
	scanf("%d",&val);
	for(i=0;i<n;i++)
	{
		if (val==arr[i])
		{
			flag=1;
			break;
			
		}
		//if (i==n)
		//	printf("Element not found.\n");
		//else
	}
		if (flag)
		printf("%d is found at %d position.\n",val,i+1);
		else 
		printf("Element not found.");
			
	return 0;

}
