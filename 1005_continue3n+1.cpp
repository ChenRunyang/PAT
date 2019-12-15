
#include<stdio.h>


void sort(int a[], int n) 
{
    int i,j;
    for(i=0;i<n-1;i++) 
        for(j=0;j<n-i-1;j++)
            if(a[j]<a[j+1]) 
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
}

int main()
{
  int i,m,flag;
  int j=0;
  int n=0;
  char k;
  scanf("%d",&i);
  getchar();
  int a[100]={0};
  int b[100]={0};
  while(i!=1)
  {
    if(i%2==0)
    {
      i /= 2;
      a[j]=i;
    }
    else
    {
      i = (3*i+1)/2;
      a[j]=i;
    }
    j++;
  }
  while((k=getchar())!='\n')
  {
    scanf("%d",&m);
    j=0;
    flag=0;
      while(a[j]!=0)
      {
        if(m ==a[j])
        {
          flag=1;
        }
        j++;
      }
      if(flag==0)
      {
      b[n]=m;
      n++;
      }
    }
    j=0;
    sort(b,100);
    while(b[j+1]!=0)
    {
        printf("%d ",b[j]);
        j++;
    }
    printf("%d",b[j]);
}


