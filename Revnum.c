//To find the reverse of a number.
#include<stdio.h>
int main()
{
	int num,d,rev;
	printf("\nGive a number : ");
	scanf("%d",&num);
	rev=0;
	while (num>0)
	{
		d=num%10;
		rev=rev*10+d;
		num=num/10;
	}
	printf("\nThe reverse of the digits are : %d\n",rev);
	return 0;
											
}
