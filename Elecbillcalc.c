#include<stdio.h>
int main()
{
	int pre, post, billunit, sum;
	printf("\nGive previous reading : ");
	scanf("%d",&pre);
	printf("\nGive post reading : ");
	scanf("%d",&post);
	billunit = post-pre;
	if (billunit>0 && billunit <= 200)
		sum = billunit * 0.5;
	if (billunit>201 && billunit <= 400)
		sum = 100 + (billunit * 0.65);
	if (billunit>401 && billunit <= 600)
		sum = 230 + (billunit * 0.80);
	if (billunit>601)
		sum = 390 + (billunit * 1);
	printf("The bill for this month is %d\n", sum);
	return 0;
											
}
