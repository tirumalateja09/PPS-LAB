#include<stdio.h>
int main(){
	int i,j, a[10][10],b[10][10],n,m;
	printf("size of rowes :");
	scanf("%d",&n);
	printf("size of coloumns :");
	scanf("%d",&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("elelemts-%d%d:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("the matrix is\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("matrix transpose is \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
		
		}
	
	
}
