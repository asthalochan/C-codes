#include<stdio.h>
int main()
{
        float  inches,conversion;
	printf("\nGive the value in inches");
	scanf("%f",&inches);
        conversion = 2.54 * inches;	
	printf("\n %f inches is equal to %fcm\n",inches,conversion);
	return 0;

}
