//To find the max among three numbers.
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Give three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && b>c)
        printf("%d is larger among the numbers.",a);
    else if (b>a && a>c)
        printf("%d is larger among the numbers.",b);
    else
        printf("%d is larger among the numbers.",c);
    return 0;
}