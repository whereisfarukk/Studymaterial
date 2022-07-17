#include<stdio.h>
int top=-1;
int stack[10];
void push(int n)
{
  int x;
  printf("enter the data\n");
  scanf("%d",&x);
  if(top==n-1)
  {
    printf("overflow\n");
  }
  else
  {
    top++;
    stack[top]=x;
  }
}
void pop(int n)
{
  int data;
  if(top==-1)
  {
    printf("underflow\n");
  }
  else
  {
   data=stack[top];
   top--;
  }
  printf("deleted item is : %d",data);

}
int main()
{
  int n;
  printf("enter the number of element : ");
  scanf("%d",&n);

  push(n);
  pop(n);
  return 0;
}
