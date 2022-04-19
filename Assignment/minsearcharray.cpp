#include<stdio.h>
int main()
{
int min,index,n,i,a[100];
printf("Enter size of array :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter element %d :",i+1);
    scanf("%d",&a[i]);
}
min=a[0];
for(i=0;i<n;i++)
{
    if(a[i]<=min){min=a[i];index=i;}
}
printf("Smallest element is : %d\n",min);
printf("Its index is: %d",index);

return 0;
}