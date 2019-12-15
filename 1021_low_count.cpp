#include<iostream>
#include<string>
using namespace std;

int main()
{
  int sor[10]={0};
  string i;
  cin>>i;
  for(auto x:i)
  {
    sor[x-'0']++;
  }
  for(int k=0;k<10;k++)
  {
    if(sor[k]!=0)
    {
      cout<<k<<":"<<sor[k]<<endl;
    }
  }
}
