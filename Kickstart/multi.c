#include<stdio.h>
#include<math.h>
int fact(int n)
{int f=1;
if(n==1)return 1;
else {
while(n)
{
f=f*n;
n--;
}
return f;}
}

int main()
{
    int n,sum=0;
printf("Enter n:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    sum=sum+(pow(i+1,2*i)/fact(2*i));
}
printf("Sum of given series is: %d",sum);


}