#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    int p=0,pa=0,pat=0;
    char demo[100001];
    cin>>demo;
    for(int i=0;i<strlen(demo);i++)
    {
        if(demo[i]=='P')
        {
            p++;
            p = p%1000000007;
        }
        else if(demo[i]=='A')
        {
            pa +=p;
            pa = pa%1000000007;
        }
        else
        {
            pat +=pa;
            pat =pat%1000000007;
        }
    }
    cout<<pat;
}
