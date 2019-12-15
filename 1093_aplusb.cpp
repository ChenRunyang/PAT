#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a,b,c;
    getline(cin,a);
    getline(cin,b);
    c=a+b;
    char d[128]={0};
    for(int i=0;i<c.length();i++)
    {
        if(b[c[i]==0])
        {
            cout<<c[i];
            d[c[i]]++;
        }
    }
}