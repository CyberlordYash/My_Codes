#include<stdio.h>
int power(int x,int y)
{
    if(y==0){return 1;}
    else return x*power(x,y-1);
}

int main()
{
    int x,y;
    printf("Enter number :");
    scanf("%d",&x);
    printf("Enter power:");
    scanf("%d",&y);
    printf("answer is: %d",power(x,y));

}