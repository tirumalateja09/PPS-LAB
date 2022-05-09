#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c,d,r1,r2;
	printf("Enter the coeficient of x^2 :");
	scanf("%f",&a);
	printf("Enter the coefficient of x :");
	scanf("%f",&b);
	printf("enter the constant :");
	scanf("%f",&c);
	d=b*b - (4*a*c);
	if(d<0)
	{
		printf(" roots are imaginary ");
	}
		else
		{
			r1=(-b+sqrt(d))/(2*a);
			r2=(-b-sqrt(d))/(2*a);
			printf("roots of the given quadratic equation are  %f and %f ",r1,r2);
		}
		
		
}
