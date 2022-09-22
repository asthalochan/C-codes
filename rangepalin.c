//Print the Palindromic numbers in a range.
#include<stdio.h>
int main()
{
	int num,d,rev,temp,i,u,l;
	printf("\nGive lower limit : ");
	scanf("%d",&l);
	printf("\nGive upper limit : ");
	scanf("%d",&u);
	for(i=l;i<=u;i++)
	{
		num=i;
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
	}
	return 0;
											
}
