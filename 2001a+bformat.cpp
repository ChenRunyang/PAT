#include<iostream>
#include<string>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string demo=to_string(a+b);
    int tmp=(demo.length()%3);
    for(int i=0;i<tmp;i++)
    {
        cout<<demo[i];
    }
    for(int i=0;i<(demo.length()-tmp);i++)
    {
        if(i%3==0&&demo[i+tmp-1]!='-')
        {
            cout<<",";
        }
        cout<<demo[i+tmp];
    }
}