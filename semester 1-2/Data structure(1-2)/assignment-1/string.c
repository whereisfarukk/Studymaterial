#include<stdio.h>
#include<string.h>
char str[20];
void Substring(void)
{
  int p,l,i=0;
  char sub[10];
  printf("enter the position and lenth of the substring\n");
  scanf("%d%d",&p,&l);
  while(i<l)
  {
    sub[i]=str[p+i-1];
    i++;

  }
  sub[i]='\0';
  printf("%s",sub);
}
void Indexing(void)
{
  char sub[10];
  int i=0,j,k=0,s,e,p=0,l;
  printf("enter the substring\n");
  scanf("%s%*c",&sub);
  l=strlen(sub);
  for(i=0;i<strlen(str);i++)
  {
    k=0;
    if(str[i]==sub[0])
    {
     for(j=i;j<i+l;j++)
     {
       if(str[j]==sub[k++])
       {
        s=i,e=j;
        p++;
       }
      if(p==l)
       break;
     }
    if(p==l)
      break;
   }
  }
  printf("The index num of the substring is %d %d",s,e);

}
void Replace(void)
{
 int i=0,p;
 while(str[i]!='\0')
 {
  i++;
 }
 printf("which index position data you want to replace\n");
 scanf("%d%*c",&p);
 printf("enter your data\n");
 scanf("%c%*c",&str[p]);
 printf("%s",str);

}
void Delete(void)
{
  printf("after deleting a data new string\n");
  int i=0;
  while(str[i]!='\0')
  {
   i++;
  }
  str[i-1]='\0';
  printf("%s",str);

}
void Insert(void)
{
 int i=0;
 while(str[i]!='\0')
 {
  i++;
 }
 printf("Insert a data\n");
 scanf("%s",&str[i]);
 str[i+1]='\0';
 printf("new string is %s",str);


}
void Length(void)
{
 int i=0;
 while(str[i]!='\0')
 {
  i++;
 }
 printf("the lenth of the string is %d\n",i);

}
void concatenate(void)
{
  char s2[20];
  printf("enter second string\n");
  scanf("%s",&s2);
  strcat(str,s2);
  printf("after concatetion the string is : %s\n",str);


}
int main()
{
  int n,i,op;
  printf("enter the string\n");
  //scanf("%s",&str);
  gets(str);
  printf("select operation\n1.Substring\n2.Indexing\n3.Length\n4.Insert\n5.Delete\n6.Replace\n7.Concatenate\n\n");
  scanf("%d",&op);
  if(op==1)
  {
   Substring();
  }
  else if(op==2)
  {
    Indexing();
  }
  else if(op==3)
  {
    Length();
  }
  else if(op==4)
  {
    Insert();
  }
  else if(op==5)
  {
    Delete();
  }
  else if(op==6)
  {
    Replace();
  }
  else if(op==7)
  {
   concatenate();
  }
  return 0;

}
