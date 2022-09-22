//Check if the entered three digit number is Armstrong.
#include<stdio.h>
#include<math.h>
int main()
{
	int num,d,d2,temp,sum,power,temp2;
	printf("\nGive a number : ");
	scanf("%d",&num);
	power=0;
	temp=num;
	temp2=num;
	printf("%d\n",temp2);
	while (temp2>0)
	{
		d=temp2%10;
		power=power+1;
		temp2=temp2/10;
	}
	sum=0;
	printf("%d\n",power);
	printf("%d\n",temp);
	while(temp>0)
		{
			d2=temp%10;
			sum=sum+(pow(d2,power));
			temp=temp/10;
		}
	printf("%d\n",sum);
	//if(temp2==sum)
	//	printf("\nThe number  %d is an Armstrong number.\n",temp2);
	//else
	//	printf("\nThe number  %d is not an Armstrong number.\n",temp2);
	return 0;										
}
