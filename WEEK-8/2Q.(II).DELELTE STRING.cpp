// delete the string
#include<stdio.h>
#include<String.h>
void stringdel (char s1[100],int p,int n);
int main(){
	char s1[100];
	int p,n;
	printf(" enter the string:");
	gets(s1);
	printf("enter the position:");
	scanf("%d",&p);
	printf("enter the no. of charecters to del:");
	scanf("%d",&n);
	stringdel(s1,p,n);
}
void stringdel (char s1[100],int p,int n){
	int m,i,j;
	m=strlen(s1);
	char temp[100];
	for(i=0;i<p;i++){
		temp[i]=s1[i];
	}
	i=n+p;
	for(j=p;j<m;j++){
		temp[j]=s1[i];
		i++;
	}
	puts(temp);
}
