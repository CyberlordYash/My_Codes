#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100],count=0;
printf("Enter String :");
gets(a);
printf("Enter Substring to be searched for :");
gets(b);
for(int i=0;i<strlen(a);i++)
{   count=0;
    for(int j=0;j<strlen(b);j++)
    {
        if(a[i+j]!=b[j]){}
        else {count++;}
    }
    if(count==strlen(b)){break;}
}
if(count==0){printf("Substring not found");}
else {printf("found");}

}