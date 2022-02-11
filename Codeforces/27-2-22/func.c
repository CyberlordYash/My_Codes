#include<stdio.h>
int fact(int);

int main()
{
int a;
printf("Enter number :");
scanf("%d",&a);
printf("Factorial is : %d",fact(a));
main();

}
int fact(int a)
{int fact=1;
    while(a)
    {
    fact=fact*a;
    a--;

    }
    return fact;
}
