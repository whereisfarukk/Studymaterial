#include<stdio.h>
int step=1;
void merge(int a[],int lb,int mid, int ub)
{
  int i=lb;
  int j=mid+1;
  int k=0;
  int b[20],m,n;
  while(i<=mid && j<=ub)
  {
    if(a[i]<=a[j])
    {
     b[k]=a[i];
     i++;k++;
    }
    else
    {
    b[k]=a[j];
    j++;k++;
    }
  }
  if(i>mid)
  {
    while(j<=ub)
    {
     b[k]=a[j];
     j++;k++;
    }
 
  }
  else
  {
   while(i<=mid)
   {
     b[k]=a[i];
     k++;i++;
   }
  }
  for(i=lb;i<=ub;i++)
  {
   a[i]=b[i-lb];
  }
}
void mergeshort(int a[],int lb,int ub)
{
    
  if(lb<ub)
  {
    int mid=(lb+ub)/2;
    mergeshort(a,lb,mid);
    mergeshort(a,mid+1,ub);
    merge(a,lb,mid,ub);
   printf("%d step :",step++);
  for(int i=0;i<9;i++)
  {
   printf("%d ",a[i]);
  }
  printf("\n");
 
  }
 
}
int main()
{
  int a[10]={45,43,23,67,86,50,98,52,79};
  int i;

  mergeshort(a,0,8);
  return 0;
 
}
