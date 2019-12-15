#include<iostream>
#include<stdio.h>
#include<deque>
using namespace std;

int main()
{
  int i,j,k,m;
  scanf("%d%d",&i,&j);
  deque<int> lin;
  for(k=0;k<i;k++)
  {
    cin>>m;
    lin.push_back(m);
  }
  for(k=0;k<j;k++)
  {
      m=lin.back();
      lin.pop_back();
      lin.push_front(m);
  }
  for(k=0;k<lin.size()-1;k++)
  {
    cout<<lin[k]<<" ";
  }
  cout<<lin[k];
}
