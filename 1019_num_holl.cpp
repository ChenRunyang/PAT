#include<iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

bool mygreater(int i,int j)
{
  return i>j;
}
int main()
{
  int sor,i,tmp,flag=0;
  int fir[4];
  int sec[4];
  cin>>sor;
  while(sor!=6174&&flag!=4)
  {
    flag=0;
    tmp=sor;
    for(i=0;i<4;i++)
    {
      fir[i]=tmp%10;
      sec[i]=fir[i];
      tmp /= 10;
      if(fir[i]==fir[0])
      {
        flag++;
      }
    }
    sort(fir,fir+4,mygreater);
    sort(sec,sec+4);
    sor=fir[0]*1000+fir[1]*100+fir[2]*10+fir[3]-sec[0]*1000-sec[1]*100-sec[2]*10-sec[3];
    cout<<setfill('0')<<setw(4);
    cout<<fir[0]*1000+fir[1]*100+fir[2]*10+fir[3];
    cout<<" - ";
    cout<<setfill('0')<<setw(4);
    cout<<sec[0]*1000+sec[1]*100+sec[2]*10+sec[3];
    cout<<" = ";
    cout<<setfill('0')<<setw(4);
    cout<<sor<<endl;
  }
}
