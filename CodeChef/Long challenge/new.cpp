#include<stdio.h>
#include<math.h>

int main()
{   int a,n,count=0;
    printf("Enter a number to check :");
    scanf("%d",&a);
    n=a;
    while(n){
        if(a%n==0)
        count++;
        n--;
    }
    if(count<=2)printf("It is Prime");
    else printf("Not Prime");

   

}
