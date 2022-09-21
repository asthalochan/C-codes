#include <stdio.h>
int main()
{
    int rnum,num, fir, sec, unit;
    printf("Give a number : \n");
    scanf("%d",&rnum);
    /*rnum=num;*/
    fir=rnum/100;
    num=rnum%100;
    sec=num/10;
    unit=num%10;
    /*revnum=(unit*100)+(sec*10)+(fir*1);*/
    if (fir==unit)
    {
        printf("The input number, %d is Palindromic\n",rnum);
    }
    else
    {
        printf("The input number , %d is not palindromic\n",rnum);
    }
    return 0;
}