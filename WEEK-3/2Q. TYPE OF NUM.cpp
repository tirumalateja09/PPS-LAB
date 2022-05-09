#include<stdio.h>
int main(){
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	if(a>0)
	printf("Entered number %d is positive ",a);
    else if (a==0)
	printf("Entered number %d is zero ",a);
	else if (a<0)
	printf("Entered number %d is negative",a);
	else
	printf("PLEASE ENTER ONLY NUMBERS");
	return 0;
}
