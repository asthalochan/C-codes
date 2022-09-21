//To calculate the division if the percentage is entered.
#include<stdio.h>
int main()
{
    float totmar,marsec,pert;
    printf("Give Total marks : ");
    scanf("%d",&totmar);
    printf("Give Marks secured : ");
    scanf("%d",&marsec);
    pert = ((marsec)/(totmar))*100;
    if (pert>= 60)
        printf("Congratulations you have secured first division.\n");
    if (pert>= 50 && pert < 60 )
        printf("Congratulations you have secured Second division.\n");
    if (pert>= 40 && pert < 50 )
        printf("Congratulations you have secured Third division.\n");
    if (pert< 40)
        printf("Sorry you have failed.\n");
    return 0;

}