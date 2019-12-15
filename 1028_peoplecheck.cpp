#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

typedef struct people
{
  char name[10];
  int year;
  int mon;
  int day;
  int ava;
}Peo;

bool my_sort(Peo a,Peo b)
{
    if(a.year != b.year) return a.year <= b.year;
    else if(a.mon != b.mon) return a.mon <= b.mon;
    else return a.day <= b.day;
}

int main()
{
  int tim,flag;
  int poi;
  int sum=0;
  cin>>tim;
  Peo sor[tim];
  for(int i=0;i<tim;i++)
  {
    scanf("%s %d/%d/%d",sor[i].name,&sor[i].year,&sor[i].mon,&sor[i].day);
  }
  sort(sor,sor+tim,my_sort);
  for(int seq=tim-1;seq>=0;seq--)
  {
    flag=0;
    if(sor[seq].year>2014||sor[seq].year<1814)
    {
      flag++;
    }
    else if(sor[seq].year==2014||sor[seq].year==1814)
    {
      if((sor[seq].year==2014&&sor[seq].mon>9)||(sor[seq].year==1814&&sor[seq].mon<9))
      {
        flag++;
      }
      else if(sor[seq].mon==9||sor[seq].mon==9)
      {
        if((sor[seq].year==2014&&sor[seq].day>6)||(sor[seq].year==1814&&sor[seq].day<6))
        {
          flag++;
        }
      }
    }
    if(flag==0)
    {
      sor[seq].ava=1;
      sum++;
    }
    else
    {
      sor[seq].ava=0;
    }
  }
  cout<<sum<<" ";
  for(int seq=0;seq<tim;seq++)
  {
    if(sor[seq].ava==1)
    {
      cout<<sor[seq].name<<" ";
      break;
    }
  }
  for(int seq=tim-1;seq>=0;seq--)
  {
    if(sor[seq].ava==1)
    {
      cout<<sor[seq].name;
      break;
    }
  }
}