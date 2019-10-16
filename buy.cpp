#include<iostream>
#include<string>

using namespace std;

int main()
{
    bool flag=true;
    int ncou=0;
    string src;
    string det;
    cin>>src;
    cin>>det;
    string::size_type position;
    for(int i=0;i<det.length();i++)
    {
        position=src.find(det[i]);
        if(position==src.npos)
        {
            flag=false;
            ncou++;

        }
        else
        {
            src.erase(position,1);
        }
    }
    if(flag==true)
    {
        cout<<"Yes"<<" "<<src.length();
    }
    else
    {
        cout<<"No"<<" "<<ncou;
    }
}
