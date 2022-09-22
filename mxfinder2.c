#include<stdio.h>
int main()
{
	int a, b, c;
	printf("\nGive three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && a>c)
		printf("%d is larger among.",a);
	else if (b>a && b>c)
		printf("%d is larger among.",b);
	else 
		printf("%d is larger among.",c);
	return 0;
											
}
