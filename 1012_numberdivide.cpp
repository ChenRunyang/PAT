#include<stdio.h>

int main()
{
  int sor,gar;
  char m;
  int k=1,count1=0,count2=0,sum=0,count3=0,max_num=0;
  float g,i=0;
  scanf("%d",&gar);
  getchar();
  while(1)
  {
    scanf("%d",&sor);
    switch(sor%5)
    {
      case 0:
      {
        if(sor%2==0)
        {
          count1 += sor;
        }
        break;
      }
      case 1:
      {
        count2 += k*sor;
        k= -k;
        break;
      }
      case 2:
      {
        sum++;
        break;
      }
      case 3:
      {
        i++;
        count3 += sor;
        break;
      }
      case 4:
      {
        if(sor>max_num)
        {
          max_num=sor;
        }
        break;
      }
    }
    m=getchar();
    if(m=='\n')
    {
        break;
    }
  }
  if(count1==0)
  {
    printf("N ");
  }
  else
  {
    printf("%d ",count1);
  }
  if(count2==0)
  {
    printf("N ");
  }
  else
  {
    printf("%d ",count2);
  }
  if(sum==0)
  {
    printf("N ");
  }
  else
  {
    printf("%d ",sum);
  }
  if(count3==0)
  {
    printf("N ");
  }
  else
  {
    g=(count3/i);
    printf("%.1f ",g);
  }
  if(max_num==0)
  {
    printf("N");
  }
  else
  {
    printf("%d",max_num);
  }
}
