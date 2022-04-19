#include<stdio.h>
int main()
{
    int a[50][50],r,c,sum=0;
    printf("Enter number of rows:");
    scanf("%d",&r);
    printf("Enter number of columns:");
    scanf("%d",&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }   
    for(int i=0;i<r;i++)
    {   sum=0;
        for(int j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of %d row is: %d\n",i+1,sum);
    } 
     for(int i=0;i<c;i++)
    {   sum=0;
        for(int j=0;j<r;j++)
        {
            sum=sum+a[j][i];
        }
        printf("sum of %d column is: %d\n",i+1,sum);
    } 




}