#include<stdio.h>
int main()
{
    char a[500],count=0;
    gets(a);
    for(int i=0;;i++)
    {count++;
        if(a[i]=='\0'){break;}
    }
    printf("%d",count-1);



}