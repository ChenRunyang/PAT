#include<iostream>
#include<cmath>
using namespace std;

int main()
{
  char sym;
  int num;
  int k=0;
  cin>>num>>sym;
  int tmp=sqrt((num+1)/2);
  int top_num=(tmp)*2-1;
  int remain=num-(tmp*tmp)*2+1;
  for(int i=top_num;i>0;i -=2)
  {
    for(int m=k;m>0;m--)
    {
      cout<<" ";
    }
    for(int m=i;m>0;m--)
    {
      cout<<sym;
    }
    k++;
    cout<<endl;
  }
  k--;
  k--;
  for(int i=3;i<=top_num;i +=2)
  {
    for(int m=k;m>0;m--)
    {
      cout<<" ";
    }
    for(int m=i;m>0;m--)
    {
      cout<<sym;
    }
    k--;
    cout<<endl;
  }
  cout<<remain;
}