#include<iostream>
#include<string>

using namespace std;

int main()
{
    int num;
    char unicode;
    cin>>num>>unicode;
    string tmp1(num,unicode);
    string tmp2(num,' ');
    tmp2[0]=unicode;
    tmp2[num-1]=unicode;
    cout<<tmp1<<endl;
    for(int i=0;i<(num/2-2);i++)
    {
        cout<<tmp2<<endl;
    }
    cout<<tmp1<<endl;
}
