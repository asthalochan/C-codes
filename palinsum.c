//Print the total number of Palindromic numbers in a range.
#include<stdio.h>
int main()
{
	int num,d,rev,temp,i,u,l,sum;
	printf("\nGive lower limit : ");
	scanf("%d",&l);
	printf("\nGive upper limit : ");
	scanf("%d",&u);
	sum=0;
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
			sum=sum+1;
	}
	printf("Total numbers of palindromic numbers in the given range are : %d\n",sum);
	return 0;
											
}
