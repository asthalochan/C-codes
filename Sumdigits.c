//To find the sum of the digits of a number.
#include<stdio.h>
int main()
{
	int num,d,sum;
	printf("\nGive a number : ");
	scanf("%d",&num);
	sum=0;
	while (num>0)
	{
		d=num%10;
		sum=sum+d;
		num=num/10;
	}
	printf("\nThe sum of the number is : %d\n",sum);
	return 0;
											
}
