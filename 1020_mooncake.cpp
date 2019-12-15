#include<iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

typedef struct pie
{
  int price;
  int sum;
  float u_price;
}Pie;

bool mygreater(Pie i,Pie j)
{
  return i.u_price>j.u_price;
}
int main()
{
  int num,need;
  float mon=0;
  cin>>num>>need;
  Pie sor[num];
  for(int i=0;i<num;i++)
  {
    cin>>sor[i].sum;
  }
  for(int i=0;i<num;i++)
  {
    cin>>sor[i].price;
  }
  for(int i=0;i<num;i++)
  {
    sor[i].u_price=(float) sor[i].price/(float) sor[i].sum;
  }
  sort(sor,sor+num,mygreater);
  int j=0;
  while(1)
  {
    if(need<sor[j].sum)
    {
      mon += sor[j].u_price*need;
      break;
    }
    mon+=sor[j].price;
    need -=sor[j].sum;
    j++;
  }
  cout.setf(ios::fixed);
  cout << setprecision(2)<<mon<<endl;
}
