#include<stdio.h>
int main()
{
	int a,b,n,i,fibb;
	printf("\nGive value of n : ");
	scanf("%d",&n);
	a=0;
	b=1;
	printf("%d\n",a);
	printf("%d\n",b);
	for (i=3;i<=n+1;)
	{
		fibb=a+b;
		printf("%d\n",fibb);
		a=b;
		b=fibb;
	i=i+1;
	}
	return 0;
											
}
