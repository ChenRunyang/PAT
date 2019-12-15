#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
using namespace std;

int main()
{
  char j,k;
  int q;
  int flag=0;
  char lin[4][60];
  for(int i=0;i<4;i++)
  {
    cin>>lin[i];
  }
  for(int i=0;i<(int)(((strlen(lin[0]))<strlen(lin[1]))?strlen(lin[0]):strlen(lin[1]));i++)
  {
    if(lin[0][i]==lin[1][i])
    {
      if(flag&&(isdigit(lin[0][i])||(lin[0][i]>='A'&&lin[0][i]<='N')))
      {
        j=lin[0][i];    //j是第二个相同字母
        break;
      }
      else if(lin[0][i]>='A'&&lin[0][i]<='G')
      {
        k=lin[0][i];    //k是第一个
        flag++;
      }
    }
  }
  for(int i=0;i<(int)(((strlen(lin[2]))<strlen(lin[3]))?strlen(lin[2]):strlen(lin[3]));i++)
  {
    if(lin[2][i]==lin[3][i]&&isalpha(lin[2][i]))
    {
      q=i;
      break;
    }
  }
  switch(k)
  {
    case'A':cout<<"MON ";break;
    case'B':cout<<"TUE ";break;
    case'C':cout<<"WED ";break;
    case'D':cout<<"THU ";break;
    case'E':cout<<"FRI ";break;
    case'F':cout<<"SAT ";break;
    case'G':cout<<"SUN ";break;
  }
  if(j<='N'&&j>='A')
  {
    cout<<(j-'A')+10<<":";
  }
  else
  {
    cout<<j-'0'<<":";
  }
  cout<<setfill('0');
  cout<<setw(2)<<q<<endl;
}