#include<stdio.h>
int main()
{	float  fahrenheit,conversion;
	printf("\nGive the value in fahrenheit : ");
	scanf("%f",&fahrenheit);
	conversion = ((fahrenheit-32)/1.8);	
	printf("\n %.2f fahrenheit is equal to %.2fcelcius\n",fahrenheit,conversion);
	return 0;

}
