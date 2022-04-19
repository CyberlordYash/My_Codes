#include<stdio.h>
int main()
{
int n,i,a[100],index,search;
printf("Enter size of array :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    printf("Enter element %d :",i+1);
    scanf("%d",&a[i]);
}
printf("enter element you wanna search :");
scanf("%d",&search);

for(i=0;i<n;i++)
{   
    if(a[i]==search){index=i;}
}
if(index<0){
    printf("Element not found.");
}
else {
    printf("Element found at index :%d",index);
}


}