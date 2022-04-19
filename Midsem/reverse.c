#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],temp;
    printf("Enter string :");
    gets(a); 
    int len=strlen(a);
    for(int i=0;i<len/2;i++)
    {
        temp=a[len-i-1];
        a[len-i-1]=a[i];
        a[i]=temp;
    }          

    printf("New reversed string is :\n");
    printf("%s",a);



    
}