#include<stdio.h>
int main()
{
    int a[100],sumeven=0,sumodd=0,n,min,temp,index;
    printf("Enter size of array :");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter :");
        scanf("%d",&a[i]);
        
    }
    for(int i=0;i<n;i++)
    {   min=a[i];
        for(int j=i;j<n;j++)
        {
        if(min<=a[j]){min=a[j];index=j;}
        }
        temp=a[i];
        a[i]=min;
        a[index]=temp;
        
    }   
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
    
}