//Write a C program to convert centigrade into Fahrenheit.
#include<stdio.h>
int main(){
	int  centigrate;
	printf("Enter the value:");
	scanf("%d",&centigrate);
	printf("fahrenheit = %.2f",(centigrate*1.8)+32);
	return 0;
}
