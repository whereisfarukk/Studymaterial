#include<stdio.h>
void binarysearch(int x[],int lb,int ub,int find)
{
  int step=1;
  if(x[12]<find || x[0]>find)
  {
   printf("respected value doesn't exist\n");

  }
  else
  {
    while(lb<=ub)
    {
      int mid=(lb+ub)/2;

       if(x[mid]==find)
      {
        printf("step %d:\nrespected value index is %d\nthe number of total step is %d\n",step,mid,step);
        break;
      }
      else if(x[mid]>find)
      {
        ub=mid-1;
        printf("step %d:\nmidle index is %d\nmidle value is %d\nrespected value range is between %d  to %d\n\n",step,mid,x[mid],lb,ub);
        step++;
      }
      else
      {
        lb=mid+1;
        printf("step %d:\nmidle index is %d\nmidle value is %d\nrespected value range is between %d  to %d\n\n",step,mid,x[mid],lb,ub);

        step++;
      }

    }
  }

}
int main()
{
    int up,lb,find;
    int x[]={11,22,30,33,40,44,55,60,66,77,80,89,99};
    lb=0;up=12;
    printf("enter value you want to find\n");
    scanf("%d",&find);
    binarysearch(x,lb,up,find);

    return 0;
}
