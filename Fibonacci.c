//To find the fibonacci sequence of a given number.
#include <stdio.h>
int main()
{
    int n,a,b,i,fibb;
    printf("Give a number : ");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\n",a);
    printf("%d\n",b);
    for (i=3;i<=n+1;i++)
    {
        fibb=a+b;
        printf("%d\n",fibb);
        a=b;
        b=fibb;
    }
    return 0;
}
