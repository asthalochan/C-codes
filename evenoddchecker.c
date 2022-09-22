#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("\nGive a number : ");
	scanf("%d",&num);
	num%2==0 ? printf("%d is Even number\n",num):printf("%d is Odd number\n",num);
	return 0;
}
