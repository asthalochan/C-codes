#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("\nGive a number : ");
	scanf("%d",&num);
	if((num%3==0)&&(num%2!=0))
	{
		printf("%d is divisible by 3 an dnot divisible by 2\n",num);
	}
	printf("Thank you\n");
	return 0;
}
