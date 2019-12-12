#include<iostream>
#include<set>

using namespace std;

const int MAX=1e5+10;

struct dangerous{
    int v1,v2;
}s1[MAX];

int main()
{
    int num,box_num;
    cin>>num>>box_num;
    for(int i=0;i<num;i++)
    {
        cin>>s1[i].v1>>s1[i].v2;
    }
    for(int i=0;i<box_num;i++)
    {
        int x,v3;
        cin>>x;
        set<int>s;
        for(int j=0;j<x;j++)
        {
            cin>>v3;
            s.insert(v3);
        }
        for(int j=0;j<num;j++)
        {
            if((s.find(s1[j].v1))!=s.end() && s.find(s1[j].v2)!=s.end())
            {
                break;
            }
            if(j==num)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
            
        }
    }
}