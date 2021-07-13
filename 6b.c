#include "stdio.h"
#include "stdlib.h"

struct Node
{
  int data;
  struct Node *next;
};
struct Node *front, *rear;

void enqueue(int x)
{
  struct Node *temp;

  temp = (struct Node *)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;

  if (front == NULL && rear == NULL)
  {
    front = rear = temp;
    return;
  }
  rear->next = temp;
  rear = temp;
}

void dequeue()
{
  struct Node *temp = front;

  if (front == NULL)
  {
    printf("Error : QUEUE is empty!!");
    return;
  }
  if (front == rear)
    front = rear = NULL;

  else
    front = front->next;

  free(temp);
}

int pfront()
{
  int a;
  a = front->data;

  return (a);
}

int main()
{
  front = NULL;
  rear = NULL;

  enqueue(2);
  printf("\nfront - %d ", pfront());
  enqueue(3);
  printf("\nfront - %d ", pfront());
  enqueue(5);
  printf("\nfront - %d ", pfront());
  dequeue();
  dequeue();
  printf("\nfront - %d ", pfront());
  printf("\n");
}