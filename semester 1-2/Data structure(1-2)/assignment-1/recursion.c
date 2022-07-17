#include<stdio.h>
int fib(int x)
{
 if(x==0)
 {
  return 0;
 }
 else if(x==1 || x==2)
 {
  return 1;
 }
 else
 {
  return fib(x-1)+fib(x-2);
 }

}
int fact(int n)
{
  if(n==0)
  {
   return 1;
  }
  else
  {
   n=n*fact(n-1);
  }
}
int main()
{
  int n,c;
  printf("what do you want to calculate\n1.Factorial\n2.fibonacci\n");
  scanf("%d",&c);
  if(c==1)
  {
    printf("enter the factorial number: ");
    scanf("%d",&n);
    n=n*fact(n-1);
    printf("the factorial value is : %d\n",n);
  }
  else if(c==2)
  {
    int x,y,i;
    printf("enter the place till which you want to see fibonacci number\n");
    scanf("%d",&y);
    for(i=1;i<=y;i++)
    {
     int f=fib(i);
     printf("%d ",f);
     f=0;
    }
  }

  return 0;

}
