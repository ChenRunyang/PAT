#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

typedef struct people
{
    int demo;
    int flag1;
}Peo;

int main()
{
    int num,all_num;
    cin>>num;
    Peo marry[num][2];
    vector<int> dog;
    for(int i=0;i<num;i++)
    {
        cin>>marry[i][0].demo>>marry[i][1].demo;
    }
    cin>>all_num;
    int flag[all_num];
    for(auto x:flag)
    {
        x=0;
    }
    int det[all_num];
    for(int i=0;i<num;i++)
    {
        for(int k=0;k<2;k++)
        {
            marry[i][k].flag1=0;
        }
    }
    for(int i=0;i<all_num;i++)
    {
        cin>>det[i];
        flag[i]=0;
        for(int j=0;j<num;j++)
        {
            for(int k=0;k<2;k++)
            {
                if(det[i]==marry[j][k].demo)
                {
                    flag[i]=1;
                    marry[j][k].flag1=1;
                }
            }
        }
    }

    for(int i=0;i<all_num;i++)
    {
        if(flag[i]==0)
        {
            dog.push_back(det[i]);
        }
    }
    for(int i=0;i<num;i++)
    {
        if(marry[i][0].flag1==1)
        {
            if(marry[i][1].flag1!=1)
            {
                dog.push_back(marry[i][0].demo);
            }
        }
        else if(marry[i][1].flag1==1)
        {
            dog.push_back(marry[i][1].demo);
        }
    }
    sort(dog.begin(),dog.end(),less<int>());
    for(vector<int>::iterator x=dog.begin();x<dog.end();x++)
    {
        cout<<*x;
        if(x!=(dog.end()-1))
        {
            cout<<" ";
        }
    }
}