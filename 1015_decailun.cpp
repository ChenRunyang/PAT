#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef struct node
{
  int num;
  int de_mark;
  int cai_mark;
}student;

bool comp(const student &a,const student &b)
{
  if((a.cai_mark+a.de_mark)!=(b.cai_mark+b.de_mark))
  {
    return((a.cai_mark+a.de_mark)>(b.cai_mark+b.de_mark));
  }
  else if(a.de_mark !=b.de_mark)
  {
    return a.de_mark>b.de_mark;
  }
  else
  {
    return a.num<b.num;
  }
}

int main()
{
  int j,k,m,sum,l_mark,h_mark;
  student tmp;
  cin>>sum;
  cin>>l_mark;
  cin>>h_mark;
  vector<student> lin;
  for(int i=0;i<sum;i++)
  {
    cin>>j>>k>>m;
    if(k>=l_mark&&m>=l_mark)
    {
      tmp.num=j;
      tmp.de_mark=k;
      tmp.cai_mark=m;
      lin.push_back(tmp);
    }
  }
  cout<<lin.size()<<endl;
  vector<student> tmp_line;
  student tmp1;
  for(student &x:lin)
  {
    if(x.de_mark>=h_mark&&x.cai_mark>=h_mark)
    {
      tmp1.num=x.num;
      tmp1.de_mark=x.de_mark;
      tmp1.cai_mark=x.cai_mark;
      tmp_line.push_back(tmp1);
    }
  }
  sort(tmp_line.begin(),tmp_line.end(),comp);
  for(int q=0;q<tmp_line.size();q++)
  {
    cout<<tmp_line[q].num<<" "<<tmp_line[q].de_mark<<" "<<tmp_line[q].cai_mark<<endl;
  }

  tmp_line.clear();
  for(student &x:lin)
  {
    if(x.de_mark>=h_mark&&x.cai_mark<h_mark)
    {
      tmp1.num=x.num;
      tmp1.de_mark=x.de_mark;
      tmp1.cai_mark=x.cai_mark;
      tmp_line.push_back(tmp1);
    }
  }
  sort(tmp_line.begin(),tmp_line.end(),comp);
  for(int q=0;q<tmp_line.size();q++)
  {
    cout<<tmp_line[q].num<<" "<<tmp_line[q].de_mark<<" "<<tmp_line[q].cai_mark<<endl;
  }
  tmp_line.clear();
  for(student &x:lin)
  {
    if(x.de_mark<h_mark&&x.cai_mark<h_mark&&x.de_mark>=x.cai_mark)
    {
      tmp1.num=x.num;
      tmp1.de_mark=x.de_mark;
      tmp1.cai_mark=x.cai_mark;
      tmp_line.push_back(tmp1);
    }
  }
  sort(tmp_line.begin(),tmp_line.end(),comp);
  for(int q=0;q<tmp_line.size();q++)
  {
    cout<<tmp_line[q].num<<" "<<tmp_line[q].de_mark<<" "<<tmp_line[q].cai_mark<<endl;
  }
  tmp_line.clear();
  for(student &x:lin)
  {
    if(x.de_mark<h_mark&&x.de_mark<x.cai_mark)
    {
      tmp1.num=x.num;
      tmp1.de_mark=x.de_mark;
      tmp1.cai_mark=x.cai_mark;
      tmp_line.push_back(tmp1);
    }
  }
  sort(tmp_line.begin(),tmp_line.end(),comp);
  for(int q=0;q<tmp_line.size();q++)
  {
    cout<<tmp_line[q].num<<" "<<tmp_line[q].de_mark<<" "<<tmp_line[q].cai_mark<<endl;
  }
  tmp_line.clear();
}
