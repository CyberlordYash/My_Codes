#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[200];int len1,len2,i;
    printf("Enter string :");
    gets(a);
    printf("Enter string two:");
    gets(b);
    len1=strlen(a);len2=strlen(b);
    for( i=0;i<len1+len2;i++)
    {
        if(i<len1){c[i]=a[i];}
        else {c[i]=b[i-len1];}
    }
    c[i]='\0';
    printf("New Concatenated string is :\n%s",c);

    

}