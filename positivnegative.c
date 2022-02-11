#include<stdio.h>
#include<math.h>
 int main()
{
    float x,n;float sum=0,q=1;
    printf("Enter a number :");
    scanf("%f",&x);
    printf("Enter a number n:");
    scanf("%f",&n);
    for(int i=2;i<=n;i++){
    q=q*-1;
    sum=sum+(pow(x,i)/i)*q;
    }
    printf("Answer is %f",1+sum);
}