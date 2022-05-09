#include<stdio.h>
int rev(int);
int main(){
	int n;
	printf(" enter the number :");
	scanf("%d",&n);
	printf("%d reverse is %d",n,rev(n));;
}
int sum=0,r;
int rev(int x){
	
	if(x>0){
		r=x%10;
		sum=sum*10+r;
		rev(x/10);
	}
	else
	return sum;


}

