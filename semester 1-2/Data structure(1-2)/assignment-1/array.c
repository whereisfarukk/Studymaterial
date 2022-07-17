#include<stdio.h>
#include<string.h>
int n;
void insert(int x[])
{
  int n2,i2,n3,i3;
  printf("which index you want to insert something\n");
  scanf("%d",&n2);
  for(i2=n2;i2<n+1;i2++)
  {
    x[i2+1]=x[i2];
  }
  scanf("%d",&x[n2]);
  for(i2=0;i2<n+1;i2++)
  {
   printf("%d ",x[i2]);
  }
  printf("the sorted list is\n");
  for(i2=0;i2<n;i2++)
  {
    for(i3=0;i3<n-1-i2;i3++)
    {
      if(x[i3]>x[i3+1])
      {
       int temp=x[i3];
       x[i3]=x[i3+1];
       x[i3+1]=temp;
      }
    }
  }
  for(i2=0;i2<n+1;i2++)
  {
   printf("%d ",x[i2]);
  }
}
void delet(int x[])
{
  int n1,i1;
  printf("which index you want to delet\n");
  scanf("%d",&n1);
  for(i1=n1;i1<=n-2;i1++)
  {
    x[i1]=x[i1+1];
  }
   x[i1]='\0';
   for(i1=0;i1<n-1;i1++)
   {
     printf("%d ",x[i1]);
   }

}
int main()
{
   int x[20],i,j;
   char ch;
   printf("enter the number of element\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&x[i]);
   }
   for(i=0;i<n-1;i++)
   {
      for(j=0;j<n-1-i;j++)
      {
        if(x[j]>=x[j+1])
        {
         int temp=x[j];
         x[j]=x[j+1];
         x[j+1]=temp;
        }
      }
   }
   for(i=0;i<n;i++)
   {
    printf("%d ",x[i]);
   }
    printf("If you want to delete someting type D\nIf you want to insert sometinh type I\n");
    scanf("%s",&ch);
    if(ch=='D')
    {
      delet(x);
    }
    else if(ch=='I')
    {
       insert(x);
    }
 return 0;
}
