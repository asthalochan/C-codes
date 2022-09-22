#include<stdio.h>
int main()
{
	int x;
	printf("\nGive value of x : ");
	scanf("%d",&x);
	if (x<10)
		printf("y = 5\n");
	if (x<5)
		printf("y = 1\n");
	if (x<0)
		printf("y = 0\n");
	if (x<-10)
		printf("y = -5\n");
	return 0;
											
}
