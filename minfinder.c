#include<stdio.h>
int main()
{
	int num1,num2,min;
	printf("\nGive two numbers : ");
	scanf("%d%d",&num1,&num2);
	min = num1<num2 ? num1 :num2 ;
	printf("Minimum =  %d\n ",min);
	return 0;
											
}
