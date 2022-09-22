#include<stdio.h>
#include<math.h>
int main()
{
	int rnum,num,first,second,unit,revnum;
	printf("\nGive a three digit number : ");
	scanf("%d",&rnum);
	num=rnum;
	first=num/100;
	num=num%100;
	second=num/10;
	unit=num%10;
	revnum=unit*100+second*10+first*1;
	if(revnum==rnum)
		printf("The number %d is palindrome\n",rnum);
	printf("Thank you\n");	
	return 0;
}
