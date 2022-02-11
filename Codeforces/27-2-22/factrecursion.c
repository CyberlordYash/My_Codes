#include<stdio.h>
int fact(int n)
{
    if(n==1){return n;}
    else 
    {
        n=n*fact(n-1);
    }
    

}

int main()
{
int n;
scanf("%d",&n);
fact(n);
printf("Ans is: %d",fact(n));


}