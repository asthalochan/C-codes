//To check if the number is Palindromic.
#include<stdio.h>
int main()
{
	int num,d,rev,temp;
	printf("\nGive a number : ");
	scanf("%d",&num);
	rev=0;
	temp=num;
	while (num>0)
	{
		d=num%10;
		rev=rev*10+d;
		num=num/10;
	}
	if(temp==rev)
		printf("\nThe number  %d is palindromic\n",temp);
	else
		printf("\nThe number  %d is not palindromic\n",temp);
	return 0;
											
}
