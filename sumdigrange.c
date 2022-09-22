//To find the sum of digits of  numbers in a range.
#include<stdio.h>
int main()
{
	int num,d,sum,l,u,i;
	printf("\nGive lower limit : ");
	scanf("%d",&l);
	printf("\nGive upper limit : ");
	scanf("%d",&u);
	for (i=l;i<=u;i++)
	{
		sum=0;
		num=i;	
		while (num>0)
		{
			d=num%10;
			sum=sum+d;
			num=num/10;
		}
		printf("\nThe sum of the digits are : %d\n",sum);
	}
	return 0;
											
}
