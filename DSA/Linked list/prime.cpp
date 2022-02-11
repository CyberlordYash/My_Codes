#include<stdio.h>
int main()
{
    int n,b,count=0;
    scanf("%d",&n);
    b=n;
    while(b>0){
        if(n%b==0) count++;
        b--;
    }
    printf("%d",count);
    if(count==2)printf("Prime");
    else printf("Non prime");

}