#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

long long check_left(long long *src,long long i,long long num)
{
    long long flag=0;
    for(long long j=0;j<i;j++)
    {
        if(src[j]>src[i])
        {
            flag++;
            break;
        }
    }
    return flag;
}

long long check_right(long long *src,long long i,long long num)
{
    long long flag=0;
    for(long long j=i+1;j<num;j++)
    {
        if(src[j]<src[i])
        {
            flag++;
            break;
        }
    }
    return flag;
}
int main()
{
    long long num;
    long long flag;
    vector<long long> det;
    cin>>num;
    long long src[num];
    for(long long i=0;i<num;i++)
    {
        cin>>src[i];
    }
    for(long long i=0;i<num;i++)
    {
        flag += check_left(src,i,num);
        flag += check_right(src,i,num);
        if(flag==0)
        {
            det.push_back(src[i]);
        }
        flag=0;
    }
    sort(det.begin(),det.end());
    cout<<det.size()<<endl;
    int i=0;
    for(;i<(det.size()-1);i++)
    {
        cout<<det[i]<<" ";
    }
    cout<<det[i];
}