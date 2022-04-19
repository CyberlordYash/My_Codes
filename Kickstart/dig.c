#include<stdio.h>
int main()
{
int n1,n2,a[100],b[100],c[100];
printf("Enter array1 size:");
scanf("%d",&n1);
for(int i=0;i<n1;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter array2 size:");
scanf("%d",&n2);
for(int i=0;i<n2;i++)
{
    scanf("%d",&b[i]);
}
int p=0,q=0;
for(int i=0;i<n2+n1;i++)
{
    if(a[p]<=b[q]){c[i]=a[p];p++;}
    else {c[i]=b[q];q++;}
}
printf("New arrray is:");
for(int i=0;i<n2+n1;i++)
{
    printf("%d  ",c[i]);
}
}