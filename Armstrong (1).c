//Check if the entered three digit number is Armstrong.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,d,temp,sum;
	printf("\nGive a three digit number : ");
	scanf("%d",&num);
	sum=0;
	temp=num;
	while (num>0)
	{
		d=num%10;
		sum=sum+(pow(d,3));
		num=num/10;
	}
	if(temp==sum)
		printf("\nThe number  %d is an Armstrong number.\n",temp);
	else
		printf("\nThe number  %d is not an Armstrong number.\n",temp);
	return 0;
											
}
