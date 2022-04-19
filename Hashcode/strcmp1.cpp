#include<stdio.h>
#include<string.h>
int main()
{
char a[50],c[50],i=0,count=0;
gets(a);
gets(c);
if(strlen(a)!=strlen(c))printf("Not equal");
else if(strcmp(a,c)==0)
printf("Both strings are same");
else 
printf("Not equal");

}