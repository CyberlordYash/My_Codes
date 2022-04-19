#include<stdio.h>
int main()
{
int n,i,a[100],index,num,a2[100];
printf("Enter size of array :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter element %d :",i+1);
    scanf("%d",&a[i]);
}
printf("enter index which  you wanna delete:");
scanf("%d",&index);

for(i=0;i<n;i++)
{   if(i<index){a2[i]=a[i];}
    else if(i==index){ }
    else {a2[i-1]=a[i-1];}

}
for(i=0;i<n-1;i++)
{
    printf("%d ",a2[i]);
}
}