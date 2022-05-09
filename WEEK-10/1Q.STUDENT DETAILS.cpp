#include<stdio.h>
#include<string.h>
//#include<stdlib.h>
struct student{
	char name[1000];
	int rollnumber;
	int marks;
	char grade[100];
}s;
int main(){
	int i,n;
	printf(" enter the number of students :");
	scanf("%d",&n);
	struct student s[n];
	printf("\n Enter the student details\n");
	for(i=0;i<n;i++){
		printf("\nenter  name:");
		scanf("%s",s[i].name);
		printf("enter  roll number:");
		scanf("%d",&s[i].rollnumber);
		printf("enter  marks:");
		scanf("%d",&s[i].marks);
		printf("enter grade:");
		scanf("%s",s[i].grade);
		printf("-------------------------------------");
		
	}
/*	system("cls");
	printf(" student details \n");
	for(i=0;i<n;i++){
		printf(" student name is %s\n",s[i].name);
		printf("student roll number is %d\n",s[i].rollnumber);
		printf("student marks is %d\n",s[i].marks);
		printf("student grade is %d\n",s[i].grade);
	}
	*/
	char name[100];
	printf("\nenter student name : ");
	scanf("%s",name);
	for(i=0;i<n;i++){
		if(strcmp(name,s[i].name)==0){
	     printf("\nstudent marks=%d",s[i].marks);
		}
	
	}
	return 0;
	
}
