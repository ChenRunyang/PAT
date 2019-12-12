#include<iostream>
#include<algorithm>

using namespace std;

struct cook
{
    int num;
    int sep;
};

bool compare(struct cook a,struct cook b)
{
    if(a.num==b.num)
    {
        return a.sep<b.sep;
    }
    else
    {
        return a.num>a.num;
    }
    
}

int main()
{
    int city_num,mooncake_num;
    cin>>mooncake_num>>city_num;
    int max1=0;
    struct cook cake[mooncake_num];
    int tmp;
    for(int i=0;i<mooncake_num;i++)
    {
        cake[i].sep=i+1;
        cake[i].num=0;
    }
    for(int i=0;i<city_num;i++)
    {
        for(int j=0;j<mooncake_num;j++)
        {
            cin>>tmp;
            cake[j].num+=tmp;
            if(tmp>max1)
            {
                max1=tmp;
            }
        }
    }
    sort(cake,cake+mooncake_num,compare);
    cout<<max1<<endl;
    cout<<cake[0].sep;
    for(int i=1;i<mooncake_num;i++)
    {
        if(cake[i].num==cake[0].num)
        {
            cout<<" "<<cake[i].sep;
        }
    }
}