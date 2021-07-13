#include <stdio.h>

int gcd(int a, int b);

int main()
{

  int a, b;

  printf("Let's calculate GCD:-\n\nEnter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);

  printf("GCD : %d", gcd(a, b));
  return 0;
}

int gcd(int a, int b)
{
  int r, temp;

  if (a < b)
  {
    temp = a;
    a = b;
    b = temp;
  }

  while (b != 0)
  {
    r = a % b;
    a = b;
    b = r;
  }

  return a;
}