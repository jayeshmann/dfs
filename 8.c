#include <stdio.h>
#include <stdlib.h>

#define MAX 10
int s1[MAX], s2[MAX];
int top1 = -1;
int top2 = MAX;

void push1(int val)
{
  if (top1 == top2 - 1)
  {
    printf("\nStack1 is full\n");
    return;
  }
  s1[++top1] = val;
  printf("\nValue inserted\n");
}
void push2(int val)
{
  if (top1 == top2 - 1)
  {
    printf("\nStack2 is full\n");
    return;
  }
  s2[--top2] = val;
  printf("\nValue inserted\n");
}
int pop1()
{
  if (top1 == -1)
  {
    printf("\nStack1 is empty\n");
    return -1;
  }
  else
    return s1[top1--];
}
int pop2()
{
  if (top2 == MAX)
  {
    printf("\nStack2 is empty\n");
    return -1;
  }
  else
    return s2[top2++];
}
int main()
{
  int val, ch;
  while (1)
  {
    printf("\n1.Push in stack1");
    printf("\n2.Push in stack2");
    printf("\n3.Pop from stack1");
    printf("\n4.Pop from stack2");
    printf("\n5.Exit");
    printf("\nEnter your choice:- ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      printf("\nEnter value to be inserted in 1st stack:- ");
      scanf("%d", &val);
      push1(val);
      break;
    case 2:
      printf("\nEnter value to be inserted in 2nd stack:- ");
      scanf("%d", &val);
      push2(val);
      break;
    case 3:
      val = pop1();
      if (val != -1)
        printf("\nThe popped value from stack1 is %d", val);
      break;
    case 4:
      val = pop2();
      if (val != -1)
        printf("\nThe popped value from stack2 is %d", val);
      break;
    case 5:
      exit(0);
    }
  }
}