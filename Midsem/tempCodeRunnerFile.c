#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];int i,n,len;
    printf("Enter string :");
    gets(a);
    printf("Enter n upto which sting should be copied:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    b[i]='\0';
    printf("New string upto n elements is :\n %s",b);

}