#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nGive first number : ");
	scanf("%d",&num1);
	printf("\nGive second number : ");
	scanf("%d",&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("So after swapping the num1 is %d and num2 is %d\n",num1,num2);	    		return 0;
											
}

