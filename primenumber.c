#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter a number to check if it a prime or not :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)sum=sum+1;
    }
    if(sum==2){printf("The number is prime ");}
    else printf("It is not a prime number ");
}