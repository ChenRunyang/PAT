#include<iostream>
#include<map>
#include<vector>

using namespace std;

typedef struct peo
{
    int a;
    int b;
    bool rep;
    peo():rep(true){};
}Peo;

bool issushu(int i)
{
    bool flag =true;
    for(int j=2;j<i;j++)
    {
        if(i%j==0)
        {
            flag =false;
        }
    }
    return flag;
}

int main()
{
    int num;
    cin>>num;
    int tmp;
    map<int,int> mappeople;
    for(int i=0;i<num;i++)
    {
        cin>>tmp;
        mappeople.insert(pair<int,int>(i,tmp));
    }
    int checknum;
    cin>>checknum;
    vector<Peo> det;
    Peo tmppeo;
    for(int i=0;i<checknum;i++)
    {
        cin>>tmp;
        auto iter = mappeople.find(tmp);
        if(iter == mappeople.end())
        {
            tmppeo.a=tmp;
            tmppeo.b=1;
        }
        else if(iter->second==0)
        {
            cout<<tmp<<": "<<"Mystery Award";
        }
        else if(issushu(i+1))
        {
            cout<<tmp<<": "<<"OK";
        }
        
    }
    for(int i=0;i<checknum;i++)
    {
        if(det[i].rep=false)
        {
        switch(det[i].b)
        {
            case 1:
                cout<<det[i].a<<": "<<"Are you kidding?";
                break;
            case 2:
                cout<<det[i].a<<": "<<"Mystery Award";
                break;
            case 3:
                cout<<det[i].a<<": "<<"Minion";
            case 4:
                cout<<det[i].a<<": "<<"Chocolate";
        }
    }
    else
    {
        cout<<det[i].a<<": "<<"Checked";
    }
    if(i!=checknum)
    {
        cout<<endl;
    }
    }
}