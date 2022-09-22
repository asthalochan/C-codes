//Arithmetic calculator
#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("Give two numbers : ");
	scanf("%d%d",&a,&b);
	printf("**** MENU ****\n 1.Add\n2.Subtract\n3.Multiplication\n4.Division\n");
	scanf(" %c",&op);
	switch(op)
	{
		case '1':
			printf("The sum  of two numbers is %d\n",a+b);
			break;
		case '2':
			printf("The substraction  of two numbers is %d\n",a-b);
			break;
		case '3':
			printf("The Multiplication  of two numbers is %d\n",a*b);
			break;
		case '4':
			printf("The division  of two numbers is %d\n",a/b);
			break;

	}
	return 0;

}
