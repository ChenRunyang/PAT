#include<iostream>

using namespace std;

int main()
{
  int i,j,k,flag;
  int m=0;
  int count =0;
  int str[1024]={0};
  cin>>i;
  for(j=2;j<=i;j++)
  {
    flag=0;
    for(k=2;k<j;k++)
    {
      if(j%k==0)
      {
        flag=1;
      }
    }
    if(flag==0)
    {
      str[m++]=j;
    }
  }
  m=1;
  while(str[m]!=0)
  {
    if((str[m]-str[m-1])==2)
    {
      count++;
    }
    m++;
  }
  cout<<count;
}
