#include <stdio.h>
int main()
{
  int n, i=1, sum = 0;
  printf("enter the number");
  scanf("%d", &n);

  for (; i <= n; i++)
  {
    if (i % 2 == 0)
    {
      sum = sum-i;
    }
    else
    {
      sum = sum+i;
    }
    printf("the sum of the %d = %d", n, sum);
    return 0;
  }
}