#include<stdio.h>
int main()
{
  int n,i,div=0,j;
  scanf("%d",&n);
  for(i=2;i<n;i++)
  {
   div=0;
    for(j=2;j*j<=i;j++)
    {
     if(i%j==0)
     {
      div++;
     }

    }
    if(div==0)
    {
     printf("%d ",i);

    }

  }


}
