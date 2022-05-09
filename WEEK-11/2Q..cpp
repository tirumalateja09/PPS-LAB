#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    FILE *pointer , *pointer2;
	struct employee {
	int salary,emplyid,experience; 
	long phone_no;
	char empname[20];
	char city[30];
	char reasearchwork[100]; 
	char designation[100];
	char qualification[100];
	}e;
	pointer = fopen("EmployeeDetails.txt","w+"); 
	char ch='y',name[20];
	 int cha;
	if(pointer==NULL){ 
	  printf("File Does not exist\n");
	   return 0; }
	do{
	 printf("\n Choose option \n 1. Add a record \n 2.Display\n 3.Modify \n 4.Delete\n 5.Exit \n");
	scanf("%d",&cha);
	 switch(cha)
	 {
		case 1: fseek(pointer,0,SEEK_END); 
		ch='y';
		while(ch=='y')
		 { 
		 	printf("Enter the name of the employee:"); 
		 	scanf("%s",e.empname);
			printf("Enter the employee ID :"); 
		  	scanf("%d",&e.emplyid);
		    printf("Enter the Designation of Employee :");
		    scanf("%s",e.designation);
			printf("Enter the qualification :"); 
			scanf("%s",e.qualification);
			printf("Enter the salary :");
			scanf("%d",&e.salary); 
			printf("Enter The Work Experience in Years :");
			scanf("%d",&e.experience); 
			printf("Enter Your research Work :");
			scanf("%s",e.reasearchwork);
			printf("Enter the city : ");
			scanf("%s",e.city);
			printf("Enter your phone number :");
		    scanf("%ld",&e.phone_no); 
			fwrite(&e,sizeof(e),1,pointer);
			printf("Do you want to add another record : y/n : "); 
			fflush(stdin);
			scanf("%c",&ch); } 
			break; 
		case 2: rewind(pointer);
			while(fread(&e,sizeof(e),1,pointer))
			printf("%s",e.empname);
			printf("%d",e.emplyid); 
			printf("%s ",e.designation); 
			printf("%s ",e.qualification);
			printf("%d ",e.salary);
			printf("%d ",e.experience);
			printf("%s ",e.reasearchwork);
			printf("%s ",e.city);
			printf("%ld ",e.phone_no); 
			break; 
		case 3: ch = 'y'; 
			char name[40];
			while(ch=='y'){
				printf("Enter the Employee name to modify\n ");
			 	scanf("%s",name); rewind(pointer);
				while(fread(&e,sizeof(e),1,pointer))
				{ if (strcmp(e.empname,name)==0)
				 { 
					printf("Enter the name of the employee:"); 
					fflush(stdin);
					scanf("%s",e.empname);
					printf("Enter the employee ID :");
					scanf("%d",&e.emplyid);
					printf("Enter the Designation of Employee :");
					scanf("%s",e.designation);
					printf("Enter the qualification :"); 
					scanf("%s",e.qualification);
					printf("Enter the salary :");
					scanf("%d",&e.salary);
					printf("Enter The Work Experience in Years :");
					scanf("%d",&e.experience);
					printf("Enter Your research Work :");
					scanf("%s",e.reasearchwork);
					printf("Enter the city : ");
					scanf("%s",e.city);
					printf("Enter your phone number :"); 
 					scanf("%ld",&e.phone_no);
  					fseek(pointer,sizeof(e),SEEK_CUR);
   					fwrite(&e,sizeof(e),1,pointer); } 
   				break; } 
   			printf("Do you want to modifiy another record(y/n):\n"); 
   			fflush(stdin);
   			scanf("%c",&ch); }
    	break; 
		case 4 : ch ='y';
	 	char name1[40];
		 while(ch=='y'){
	  	printf("enter the employee name to delete \n");
	   	scanf("%s",name1); pointer2 = fopen("Newtext","w"); rewind(pointer); 
	   	while(fread(&e,sizeof(e),1,pointer)) {
	   		if(strcmp(e.empname,name)!=0) 
			fwrite(&e,sizeof(e),1,pointer2); } 
			fclose(pointer); fclose(pointer2);
		 	remove("EmployeeDetails.c"); 
		 	rename("Newtext.c","EmployeeDetails.c");
		  	pointer = fopen("EmployeeDetails.c","r+");
		   	printf("Do you want to delete another record(y/n)\n"); 
		   	fflush(stdin);
		   	scanf("%c",&ch); }
		break;
 		case 5: fclose(pointer);
  		printf("thank you");
   		break;
    	default : printf("Invalid");
	 	break; } }
	  	while(cha!=5); }

