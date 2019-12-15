#include<iostream>

using namespace std;

int main()
{
  int i;
  int j=0;
  cin>>i;
  while(i!=1)
  {
    if(i%2==0)
    {
      i /= 2;
    }
    else
    {
      i=(i*3+1)/2;
    }
    j++;
  }
  cout<<j<<endl;
}