#include<stdio.h>
struct student
{
    int roll_no;
    int marks[5];
    int avg;
}s[50];

int main()
{
for(int i=0;i<2;i++)
{
printf("enter roll_no of %d student",i+1);
scanf("%d",&s[i].roll_no);
  printf("Enter marks of 5 subs:");
  s[i].avg=0;
for(int j=0;j<5;j++)
{
  
    scanf("%d",&s[j].marks[i]);
    s[i].avg=s[i].avg+s[j].marks[i];
}
s[i].avg=s[i].avg/5;
}int max=0;
for(int i=0;i<5;i++)
{
if(max<=s[i].avg){max=s[i].avg;}
}
printf("\n%d",max);


}