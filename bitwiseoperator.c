#include<stdio.h>
#include<math.h>
int main()
{
    int num,a;
    printf("Enter a number to check if it is even or odd :");
    scanf("%d",&num);
    if(num==1){
        printf("It is 1");}
        else if(num>0){ printf("it is greater than 0");}
        else
        {
            printf("It is not 1");
        }    
}