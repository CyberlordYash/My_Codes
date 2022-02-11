#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("number is 1:");break;
        case 2:printf("number is 2:");break;
        default:printf("number is greater than 2");break;

    }
    
}