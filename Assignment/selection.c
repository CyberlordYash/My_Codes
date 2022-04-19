#include<stdio.h>
int selection(int a[],int n)
{
    for(int i=0;i<n;i++){
        int min=a[i],index;
        for(int j=i;j<n;j++)
        {
            if(a[j]<=min){
                index=j;min=a[j];
            }
        }
        int temp=a[i];
        a[i]=a[index];
        a[index]=temp;
    }
}
int main()
{
int n,a[100];
printf("Enter size of array :");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
selection(a,n);
printf("sorted array is: \n");
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}


}