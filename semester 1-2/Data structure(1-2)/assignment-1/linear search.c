#include<stdio.h>
int main()
{
   int x[20],i,n,max,min;
   printf("enter the number of element\n");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
     scanf("%d",&x[i]);
   }
    max=min=x[0];
   for(i=0;i<n;i++)
   {
     if(x[i]>max)
     {
       max=x[i];
     }
     if(x[i]<min)
     {
       min=x[i];
     }

   }
   printf("maximum value is %d\nminimum value is %d",max,min);
   return 0;


}
