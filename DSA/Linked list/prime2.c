#include <stdio.h>
#include <math.h>

int main()
{
  int n, b, i, c = 2;
  printf("enter the number\n");
  scanf("%d", &n);

  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      c = 5;
      break;
    }
  }

  if (c == 2)
  {
    printf("the number is prime");
  }
  else
  {
    printf("the number is not prime");
  }
  return 0;
}