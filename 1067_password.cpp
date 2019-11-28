#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    string corruct;
    int num;
    vector<string> det;
    cin>>corruct>>num;
    string tmp;
    while(true)
    {
        cin>>tmp;
        if(tmp=="#")
        {
            break;
        }
        det.push_back(tmp);
    }
    bool flag=false;
    for(int i=0;i<det.size()&&i<num;i++)
    {
        if(det[i]==corruct)
        {
            flag=true;
            break;
        }
        else
        {
            cout<<"Wrong password: "<<det[i]<<endl;
        }
    }
    if(flag==false)
    {
        cout<<"Account locked";
    }
    else
    {
        cout<<"Welcome in";
    }
}