#include<stdio.h>
union student{
    int roll_no;
    int marks;
    char name[50];
    }s;

int main()
{
printf("Enter roll_no:");
scanf("%d",&s.roll_no);

printf("Enter marks:");
scanf("%d",&s.marks);


printf("Enter name:");
fflush(stdin);
scanf("%s",&s.name);
printf("   %d  %d  %s",sizeof(s),s.marks,s.name);


}