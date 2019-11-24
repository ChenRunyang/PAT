#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int src[num];
    for(int i=0;i<num;i++)
    {
        cin>>src[i];
    }
    int sum =0;
    for(int i=0;i<num;i++)
    {
        sum+=11*(num-1)*src[i];
    }
    cout<<sum;
}