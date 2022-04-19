#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100],temp=0;
printf("Enter first string :");
gets(a);
printf("Enter second string :");
gets(b);
if(strlen(a)!=strlen(b))
{
    printf("Not Equal \n");
}
else{
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]!=b[i]){temp=1;break;}

    }
    if(temp==0){printf("Equal Strings");}
    else printf("Not equal ");
}

}