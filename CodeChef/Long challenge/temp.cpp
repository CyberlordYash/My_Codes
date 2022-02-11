#include<stdio.h>

int main()
{   int a,sum=0,p;
    printf("Enter a number to check :");
    scanf("%d",&a);
    p=a;
    while(a)
    {
        sum=sum+(a%10)*(a%10)*(a%10);
        a=a/10;
        
    }
    printf("%d\n",sum);
    if(sum==p)printf("It is armstrong");
    else    printf("It is not ");
   

}
