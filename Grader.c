#include<stdio.h>
int main()
{
	float totmar, marsec, pert;
	printf("\nGive Total marks : ");
	scanf("%f",&totmar);
	printf("\nGive Marks Secured : ");
	scanf("%f",&marsec);
	pert = ((marsec)/(totmar))*100;
	if (pert >= 60)
		printf("Congratulations you have secured first division.\n");
	if (pert >= 50 && pert<60)
		printf("Congratulations you have secured second division.\n");
	if (pert >= 40 && pert<50)
		printf("Congratulations you have secured third division.\n");
	if (pert < 40)
		printf("Sorry you have failed.\n");
	return 0;
											
}
