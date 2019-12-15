#include<iostream>

using namespace std;

int find(int sor,int det)
{
  int count=0;
  while(sor)
  {
    if(det==(sor%10))
    {
      count++;
    }
    sor /=10;
  }
  return count;
}

int cal(int count)
{
  int sum=0;
  int i;
  for(i=0;i<count;i++)
  {
      sum =sum*10+1;
  }
  return sum;
}
int main()
{
  int sor1,det1,sor2,det2,count1,count2;
  cin>>sor1>>det1>>sor2>>det2;
  count1=find(sor1,det1);
  count2=find(sor2,det2);
  cout<<det1*cal(count1)+det2*cal(count2);
}
