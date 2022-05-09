// enter substring in to mainstring 
#include<stdio.h>
#include<string.h>
int string (char s1[100],char s2[100],int p);
int main(){
	char s1[100],s2[100];
	int p;
	printf(" enter main string :");
	gets(s1);
	printf(" enter sub-string:");
	gets(s2);
	printf("enter the position where to enter substring in mainstring:");
	scanf("%d",&p);
	string(s1,s2,p);
}
int string(char s1[100],char s2[100], int p){
	int i,j,k,n,m;
	char temp[100];
	m=strlen(s1);
	n=strlen(s2);
	for(i=0;i<p;i++){
		temp[i]=s1[i];
	}
	i=p;
	for(j=0;j<n;j++){
		temp[i]=s2[j];
		i++;
	}
	i=n+p;
	for(k=p;k<m;k++){
		temp[i]=s1[k];
		i++;
	}
	temp[i]='\0';
	puts(temp);
}
