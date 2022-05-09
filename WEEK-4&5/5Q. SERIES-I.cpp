/*i.sum=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!+……….,*/
#include<stdio.h>
#include<math.h>
int main(){
	int i,j,x,n,k=0,fact=1;
	float sum=0;
	printf("enter the number the value of x:");
	scanf("%d",&x);
	printf("enter the number of terms:");
	scanf("%d",&n);
	for(i=0;i<n*2;i=i+2){
		fact=1;
		for(j=1;j<=i;j++){
			fact=fact*j;
		}
		sum=sum+pow(-1,k)*pow(x,i)/fact;
		k++;
	}
	printf("sum of series is :%f",sum);
	 
}
