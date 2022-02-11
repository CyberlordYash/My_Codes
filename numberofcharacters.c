#include<stdio.h>
int main()
{   int i=0;
   char a[40];
    printf("enter a character ");
    scanf("%s",&a);
    printf("the first character is :%c",a[0]);
    while(a[i]!='\0')
    {
        i=i+1;
    }
    printf("%d",i);
   
}