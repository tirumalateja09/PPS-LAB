//2. Write a C program to find the area and volume of sphere.
#include<stdio.h>
int main(){
	int r;
	float pi=3.14;
	printf("enter the radius:");
	scanf("\n%d",&r);
	//printf("\n");
	printf("AREA OF A SPHERE :");
	printf("%.2f\n",4*pi*r*r);
	printf("VOLUME OF A SPHERE :");
	printf("%.2f\n",(4*pi*r*r*r)/3);
	return 0;
} 
