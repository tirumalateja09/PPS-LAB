#include<stdio.h>
int main(){
	int a[10][10],b[10][10],c[10][10];
	int i,j,n,m;
	printf("enter the size of rows(n) and columns(m)\n:");
	scanf("%d%d",&n,&m);
	printf("enter the element in to matrix-a\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter size of rows and colums in matrix-b\n");
	scanf("%d%d",&n,&m);
	printf("enter the elements in to matrix-b\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf(" substraction  of matrix a&b is \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			c[i][j]=a[i][j]-b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}

}
