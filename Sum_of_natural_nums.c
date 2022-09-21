#include<stdio.h>
int main()
{
    int num,sum;
    printf("\n Give a number : ");
    scanf("%d",&num);
    sum=(num*(num+1))/2;
    printf("The sum of the natural numbers upto the given number is %d",sum);
    return 0;
}