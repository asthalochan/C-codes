#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	printf("\nGive a number : ");
	scanf("%d",&num);
	num>0?(printf("%d is positive\n",num)):(num==0 ? printf("%d is zero\n",num):printf("%d is Negative\n",num));
	return 0;
}
