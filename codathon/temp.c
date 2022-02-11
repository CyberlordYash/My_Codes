#include<stdio.h>
int multi(int,int);
int main()
{
int a,b;
printf("Enter a and b:");
scanf("%d%d",&a,&b);
printf("Answer is : %d",multi(a,b));
return 0;
}
int multi(int a,int b)
{
    if(b!=0)
    return (a*multi(a,b-1));
    else 
    return 1;

}