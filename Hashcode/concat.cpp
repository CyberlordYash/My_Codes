#include <stdio.h>
int main(){
int n, sum;
printf("Enter n to find sum.\n");
scanf("%d", &n);
sum = 0;
for (int i = 1; i<=n; i++)
{
sum = sum + i;
}
printf("The sum of first %d natural numbers is : %d ", n, sum);
return 0;
}

