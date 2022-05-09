#include<stdio.h>
int main(){
	int a[10][10],b[10][10],multi[10][10],r1,c1,r2,c2,i,j,k;
	printf("enter the size of row -matrix-a\n");
	scanf("%d",&r1);
	printf("enter the size of coloumn -matrix-a\n");
	scanf("%d",&c1);
	printf("enter the size of row -matrix-b\n");
	scanf("%d",&r2);
	printf("enter the size of coloumn -matrix-b\n");
	scanf("%d",&c2);
	printf("enter the elements in to matrix-a\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c1;j++){
			printf(" elements-%d %d:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter elements of matrix-b \n");
	for(i=0;i<r2;i++){
		for(j=0;j<c2;j++){
			printf("elements-%d %d:",i,j);
			scanf("%d",&b[i][j]);
		}
		}
		
		for(i=0;i<r1;i++){
		    for(j=0;j<c2;j++){
			multi[i][j]=0;
			    for(k=0;k<c1;k++){
				multi[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("multiplication of array is \n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",multi[i][j]);
			}
			printf("\n");
		}
	}
