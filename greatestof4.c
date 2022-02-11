#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Enter number 1");
    scanf("%d",&a);
    printf("Enter number 2");
    scanf("%d",&b);
    printf("Enter number 3");
    scanf("%d",&c);
    printf("Enter number 4");
    scanf("%d",&d);
   int num=a;
    if(b>=num)num=b;
    if(c>=num)num=c;
    if(d>=num)num=d;
    printf("Greatest of all numbers is : %d",num);
    return 0;
}