#include<stdio.h>
#include<string.h>
struct student{
	char name[100];
	int id;
	float percentage;
};
int main(){
	struct student std;
	struct student *ptr;
	ptr=&std;
	printf(" enter student details \n ");
	printf("enter name:");
	scanf("%s",std.name);
	printf("enter id:");
	scanf("%d",&std.id);
	printf("enter percentage:");
	scanf("%f",&std.percentage);
	printf("student details \n");
	printf("student name : %s\n",ptr->name);
	printf("student id : %d\n",ptr->id);
	printf("student percentage : %f\n",ptr->percentage);
	return 0;
	
}
