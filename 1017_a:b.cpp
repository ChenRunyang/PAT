#include<iostream>
#include<string>

using namespace std;

int main()
{
  string s;
  int j;
  cin>>s>>j;
  int pre=0;
  int num;
  int tmp;
  int flag=0;
  for(auto &x:s)
  {
    if(flag==0)
    {
      if(x-'0'<j)
      {
        pre=x-'0';
        flag++;
        continue;
      }
    }
    pre*=10;
    tmp =pre+x-'0';
    cout<<tmp/j;
    pre=tmp%j;
    flag++;
  }
  cout<<" "<<pre<<endl;
}

