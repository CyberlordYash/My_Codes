#include<stdio.h>
int prime(int n)
{
   int temp=n,count=0;
while(temp)
{
    if(n%temp==0)
    {
        count++;
    }
    temp--;
}
return count;
}

int main()
{
    int a,b;
    printf("Enter Beginning");
    scanf("%d",&a);
    printf("Enter End :");
    scanf("%d",&b);
    for(int i=a;i<=b;i++)
    {
        if(prime(i)==2)printf("%d   ",i);
    }

return 0;

}