#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("\nGive value of n : ");
	scanf("%d",&n);
	i=2;
	sum=0;
	for (;i<=n;i++)
		sum=sum+i;
	printf("The sum of the sequence is %d\n",sum);		
	return 0;
											
}
