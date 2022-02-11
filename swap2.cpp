#include<stdio.h>
#include<conio.h>
int main()
{
   int  a,b;
   scanf("%d",&a);
   scanf("%d",&b);
   //swap
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After swap value is  %d , %d  ",a,b);
}