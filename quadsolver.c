#include<stdio.h>
#include<math.h>
int main()
{	
	float  A,B,C,root1,root2;
	printf("\nGive the value of coefficient A : ");
	scanf("%f",&A);
	printf("\nGive the value in coefficient B : ");
	scanf("%f",&B);
	printf("\nGive the value in coefficient C : ");
	scanf("%f",&C);
	root1 = ((-B)+(sqrt((pow(B,2)-4*A*C))))/((2*A));
	root2 = ((-B)+(sqrt((pow(B,2)-4*A*C))))/((2*A));

	printf("So the roots of the Quadratic equation are %f %f\n",root1,root2);
	return 0;

}
