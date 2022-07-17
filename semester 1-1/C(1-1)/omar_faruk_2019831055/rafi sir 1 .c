#include<stdio.h>
struct student
{
  int problem,reg;
  double cgpa;


};

int main()
{
 int n,i,j,s[100];
 struct student students[100];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d%d%lf",&students[i].reg,&students[i].problem,&students[i].cgpa);
 }
 for(i=0;i<n;i++)
 {
   s[i]=i;
 }

 for(i=0;i<n-1;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(students[j].problem<students[j+1].problem)
    {
      int temp=s[j];
      s[j]=s[j+1];
      s[j+1]=temp;
    }
   else if(students[j].problem==students[j+1].problem)
    {
     if(students[j].cgpa<students[j+1].cgpa)
       {
         int temp=s[j];
         s[j]=s[j+1];
         s[j+1]=temp;
       }
     else if(students[j].cgpa==students[j+1].cgpa)
       {
         if(students[j].reg<students[j+1].reg)
         {
           int temp=s[j];
           s[j]=s[j+1];
           s[j+1]=temp;
         }

       }

    }


  }

 }
 for(i=0;i<n;i++)
  {
  int m=s[i];
  printf("\n%d %d %.2lf",students[m].reg,students[m].problem,students[m].cgpa);

  }
}



