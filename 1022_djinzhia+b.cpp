#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int a,b,t;
  vector<int> line;
  cin>>a>>b>>t;
  a += b;
  while(a!=0)
  {
      line.push_back(a%t);
      a /=t;
  }
  for(auto i=(line.rbegin());i<line.rend();i++)
  {
      cout<<*i;
 }
}