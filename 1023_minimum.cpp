#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int sor[10];
  int mi_num=9;
  for(int i=0;i<10;i++)
  {
      cin>>sor[i];
  }
  for(int i=1;i<10;i++)
  {
      if(sor[i]!=0)
      {
          mi_num=i;
          sor[i]--;
          break;
      }
  }
  cout<<mi_num;
  for(int i=0;i<10;i++)
  {
      while(sor[i]!=0)
      {
          cout<<i;
          sor[i]--;
      }
  }
}