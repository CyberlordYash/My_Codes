#include<stdio.h>
int insertion(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int current=a[i];
        int j=i-1;
        while(a[j]>current&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;

    }
}
int main()
{
int a[100],n;
printf("Enter number of elements: " );
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
insertion(a,n);
printf("sorted arary is: \n");
for(int i=0;i<n;i++)
{
    printf("%d ",a[i]);
}



}