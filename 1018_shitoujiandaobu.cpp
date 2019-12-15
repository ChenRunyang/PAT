#include<iostream>

using namespace std;

int fin(int a[3])
{
    int max_num=0,max_flag;
    for(int i=0;i<3;i++)
    {
        if(a[i]>max_num)
        {
            max_num=a[i];
            max_flag=i;
        }
    }
    return max_flag;
}
int main()
{
  int tim,j;
  cin>>tim;
  char sor1,sor2;
  int a_win=0,eql=0,flag=0;
  int win[2][3]={0};
  for(int i=tim;i>0;i--)
  {
    cin>>sor1>>sor2;
    switch(sor1)
    {
      case 'B':
          switch(sor2)
          {
            case 'B':eql++;
            break;
            case 'C':a_win++;
            win[0][0]++;
            break;
            case 'J':
            win[1][2]++;
            break;
          }
          break;
      case 'C':
          switch(sor2)
          {
            case 'B':
            win[1][0]++;
            break;
            case 'C':
            eql++;
            break;
            case 'J':
            a_win++;
            win[0][1]++;
            break;
          }
          break;
      case 'J':
          switch(sor2)
          {
            case 'B':
                a_win++;
                win[0][2]++;
                break;
            case 'J':
                eql++;
                break;
            case 'C':
                win[1][1]++;
                break;
          }
          break;
    }
  }
  cout<<a_win<<" "<<eql<<" "<<tim-a_win-eql<<endl;
  cout<<tim-a_win-eql<<" "<<eql<<" "<<a_win<<endl;
  for(int i=0;i<2;i++)
  {
      j=fin(win[i]);
      switch(j)
      {
        case 0:cout<<"B";
        break;
        case 1:cout<<"C";
        break;
        case 2:cout<<"J";
        break;
      }
      if(flag==0)
      {
          cout<<" ";
          flag++;
      }
  }
  cout<<endl;
}
