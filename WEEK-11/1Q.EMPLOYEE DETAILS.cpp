#include<stdio.h>
#include<conio.h>
struct emp
{
char name[40];
int age;
int id;
int salary;
int exp;
char dn[20];
char qfn[20];
char researchwork[20];
char ads[20];
char city[20];
char phone[10];
};
int  main()
{
struct emp e;
FILE *fp;
char ch='y';
fp=fopen("lab1.txt","w");
if(fp==NULL)
{
printf("cannot open file");
}
while(ch=='y')
{
fprintf(fp,"**employee details**");
printf("\nenter the name:");
scanf("%s",e.name);
fprintf(fp,"\nenter the name:%s",e.name);
printf(" enter the id:");
scanf("%d",&e.id);
fprintf(fp,"\n enter the id:%d",e.id);
printf(" enter the basic salary:");
scanf("%d",&e.salary);
fprintf(fp,"\nenter the basic salary:%d",e.salary);
printf("enter the designation:");
scanf("%s",e.dn);
fprintf(fp,"\nenter the designation:%s",e.dn);
printf(" enter the experience:");
fflush(stdin);
scanf("%d",&e.exp);
fprintf(fp,"\nenter the experience:%d years",e.exp);
printf("enter the qualification:");
fflush(stdin);
scanf("%s",e.qfn);
fprintf(fp,"\nenter the qualification: %s",e.qfn);
printf("enter the researchwork:");
fflush(stdin);
scanf("%s",e.researchwork);
fprintf(fp,"\nenter the researchwork:%s",e.researchwork);
printf("enter the address:");
fflush(stdin);
scanf("%s",e.ads);
fprintf(fp,"\nenter the address:%s",e.ads);
printf("enter the city:");
scanf("%s",e.city);
fprintf(fp,"\nenter the city:%s",e.city);
printf(" enter the phone:");
fflush(stdin);
scanf("%s",e.phone);
fprintf(fp,"\nenter the phone number:%s",e.phone);
printf("do u want to add more records:(y/n)\n");
ch=getch();
}
printf("successfully created file");
fclose(fp);
}

