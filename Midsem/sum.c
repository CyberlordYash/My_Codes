#include<stdio.h>
int main()
{
int n,num,sumeven=0,productodd=1;
printf("Enter number of entries you want:");
scanf("%d",&n);
for(int i=0;i<n;i++)
{
printf("enter num:");    
scanf("%d",&num);
if(num%2==0)
{sumeven=sumeven+num;
}
else{
    productodd=productodd*num;
}

}
 
printf("Sum of even numbers is: %d \n",sumeven);
printf("Product of odd numbers is: %d \n",productodd);
return 0;


}