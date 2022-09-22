#include<stdio.h>
int main()
{
	int a, b, c;
	printf("\nGive three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if (a>b && b>c)
		printf("%d is larger among.",a);
	if (b>c && c>a)
		printf("%d is larger among.",b);
	if (c>a && a>b)
		printf("%d is larger among.",c);
	return 0;
											
}
