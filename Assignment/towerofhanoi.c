#include<stdio.h>
int tower(int n,int a,int b,int c)
{
    if(n>0){
        tower(n-1,a,c,b);
        printf("Moved a disc from %d to %d\n",a,c);
        tower(n-1,b,a,c);
    }
}

int main()
{
int n;
printf("Enter number of disc on tower A :");
scanf("%d",&n);
tower(n,1,2,3);





}