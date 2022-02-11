#include<stdio.h>
int reverse(int);
int main()
{
int n;
printf("Enter number :");
scanf("%d",&n);
printf("New num is: %d",reverse(n));

}
int reverse(int n)
{
int temp,num=0;
while(n)
{
    temp=n%10;
    num=num+temp;
    num=num*10;
    n=n/10;

}
num=num/10;
return num;
}