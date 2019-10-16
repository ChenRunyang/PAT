#include<iostream>

using namespace std;

int main()
{
    unsigned long long i,m;
    cin>>i;
    int src[i];
    for(int j=0;j<i;j++)
    {
        cin>>src[j];
    }
    cin>>m;
    int cou[m];
    int cou_num[m]={0};
    for(int u=0;u<m;u++)
    {
        cin>>cou[u];
    }
    for(int u=0;u<m;u++)
    {
        for(int j=0;j<i;j++)
        {
            if(src[j]==cou[u])
                cou_num[u]++;
        }
    }
    for(int u=0;u<m-1;u++)
    {
        cout<<cou_num[u]<<" ";
    }
    cout<<cou_num[m-1];
}
