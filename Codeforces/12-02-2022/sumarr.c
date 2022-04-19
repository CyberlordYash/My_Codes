#include<stdio.h>
int main()
{
int a[50],b[50],c[50],n1,n2;
printf("Enter number of elements in first:");
scanf("%d",&n1);
for(int i=0;i<n1;i++)
{
    printf("Enter element a[%d] :",i+1);
    scanf("%d",&a[i]);
}
printf("Enter number of elements in second:");
scanf("%d",&n2);
for(int i=0;i<n2;i++)
{
    printf("Enter element b[%d] :",i+1);
    scanf("%d",&b[i]);
}
for(int i=0;i<n1+n2;i++)
{   if(i<n1)
    {c[i]=a[i];}
    else {c[i]=b[i-n1];}
}
for(int i=0;i<n1+n2;i++)
{
    printf("%d",c[i]);
}


}