/*ii.sum=x-x3/3!+x5/5!........................., */
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,n,x,k=0,fact=1;
	float sum=0;
	printf("enter the value of x :");
	scanf("%d",&x);
	printf("enter the number of terms :");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i=i+2){
		fact=1;
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		sum=sum+pow(-1,k)*pow(x,i)/fact;
		k++;
	}
	printf("sum of series is %f",sum);
}
