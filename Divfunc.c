#include<stdio.h>
#include<math.h>
int main()
{
	float n,i,sum;
	printf("\nGive value of n : ");
	scanf("%f",&n);
	i=2;
	sum=0;
	for (;i<=n;i++)
		sum=sum + (i/(i*i));
	printf("The sum of the sequence is %f\n",sum);		
	return 0;
											
}
