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
printf("enter index where you wanna insert:");
scanf("%d",&index);
printf("enter element you wanna enter:");
scanf("%d",&num);
for(i=0;i<n+1;i++)
{   if(i<index){a2[i]=a[i];}
    else if(i==index){a2[i]=num; }
    else {a2[i]=a[i-1];}

}
for(i=0;i<n+1;i++)
{
    printf("%d ",a2[i]);
}
}