#include<stdio.h>
#include<math.h>
int main()
{
	int rnum,num,first,second,unit,sum;
	printf("\nGive a three digit number : ");
	scanf("%d",&rnum);
	num=rnum;
	first=num/100;
	num=num%100;
	second=num/10;
	unit=num%10;
	sum=(pow(first,3))+(pow(second,3))+(pow(unit,3));
	if(sum==rnum)
		printf("The number %d is an armstrong number\n",rnum);
	else 
		printf("The number %d is not an armstrong number\n",rnum);
	printf("Thank you\n");	
	return 0;
}
