#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main()
{
    int num;
    string det;
    cin>>num;
    int mima[num];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>det;
            if(det[2]=='T')
            {
                mima[i]=det[0]-'A'+1;
            }
        }
    }
    for(int i=0;i<num;i++)
    {
        cout<<mima[i];
    }
}