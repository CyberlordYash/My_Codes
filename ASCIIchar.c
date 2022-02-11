#include<stdio.h>
int main()
{
    int n;char a;
    printf("Enter character you want to check :");
    scanf("%c",&a);
    n=a;
    printf("ASCII value is %d\n",n);
    if((a>='a' && a<='z') || (a>='A'&&a<='Z'))
    {printf("\nIt is a character");}

}