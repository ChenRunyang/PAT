#include<iostream>
#include<string.h>
#include <stdio.h>

using  namespace std;

int main()
{
  int i;
  scanf("%d",&i);
  int flag1,flag2,flag3,flag4;
  char q[100];
  char *str=NULL;
  for(;i>0;i--)
  {
    scanf("%s",q);
    str=q;
    flag1=0;
    flag2=0;
    flag3=0;
    flag4=0;
    while(*str != '\0')
    {
      if((*str)=='A')
      {
        if(flag1==0)
        {
          str++;
        }
        else
        {
          flag2=1;
          str++;
        }
      }
      else if(*str=='P')
      {
        if(flag4==1)
        {
          flag3=1;
        }
        flag1=1;
        flag4=1;
        str++;
      }
      else if(*str=='T')
      {
        if(flag1==1&&flag2==1)
        {
          flag1=0;
          flag2=0;
          flag4=0;
          str++;
        }
        else
        {
          flag3=1;
          str++;
        }
      }
        else
        {
          flag3=1;
          str++;
        }
      }
    if(flag3==0)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
}