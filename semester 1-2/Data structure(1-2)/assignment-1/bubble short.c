#include<stdio.h>
#include<string.h>
int main()
{
   int i,j,l1,swap=0,inter_chang=0;
   char a[10];
   gets(a);
   l1=strlen(a);
   for(i=0;i<l1-1;i++)
   {
     for(j=0;j<l1-i-1;j++)
     {
        swap++;
       if(a[j]>a[j+1])
       {
         int temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;
         inter_chang++;
       }
     }
   }
   printf("number of swap %d\nnumber of interchange %d",swap,inter_chang);

}
