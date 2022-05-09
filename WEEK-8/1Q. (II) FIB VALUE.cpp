#include<stdio.h>
int fibvalue(int);
int main(){
	int range,fib;
	printf("enter the term :");
	scanf("%d",&range);
	fib=fibvalue(range);
	printf("%d ",fib);
}
int fibvalue(int n){
	int a=0,b=1,c,i;
	for(i=1;i<=n;i++){
		c=a+b;
		b=a;
		a=c;
		//c=a+b;
		//a=b;
		//b=c;
	}
	return a;
}
