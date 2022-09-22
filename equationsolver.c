#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,sum;
	printf("\nGive four numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c-d!=0)
	{
		printf("%d\n",c-d);		
		sum=(a+b)/(c-d);
		printf(" After evaluation the final value is %d \n",sum);
	} 
	printf("Thank you\n");
	return 0;
}
