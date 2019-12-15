#include<stdio.h>

int main()
{
  int i,j,m,k=1,flag,count_num=0,n=1;
  scanf("%d%d",&i,&j);
  while(j>0)
  {
    flag=0;
    k++;
    for(m=2;m<k;m++)
    {
      if(k%m==0)
      {
        flag=1;
      }
    }
    if(flag==0)
    {
      count_num++;
      j--;
    if(i>count_num)
    {
      continue;
    }
    else if(j==0)
    {
      printf("%d",k);
      n++;
    }
    else
    {
      if(n%10==0)
      {
        printf("%d",k);
        printf("\n");
        n++;
      }
      else
      {
      printf("%d ",k);
      n++;
      }
    }
    }
  }
}
