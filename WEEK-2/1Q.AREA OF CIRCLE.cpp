//1. Write a C program to find the area of a circle using the formula:
#include<stdio.h>
#define Pi 3.14
int main(){
	float  radius,area;
	printf("enter the radius :");
	scanf("%f",&radius);
	area=Pi*radius*radius;
	printf("AREA OF A CIRCLE IS \n");
	printf("%.2f",area);
	return 0;
	
}


