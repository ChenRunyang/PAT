#include<iostream>
#include<string>
#include<vector>
#include<ctype.h>

using namespace std;

void check(string src)
{
    bool num_flag=false;
    bool alpha_flag=false;
    bool not_pass=false;
    if(src.size()<6)
    {
        cout<<"Your password is tai duan le.";
    }
    else
    {
        for(int i=0;i<src.size();i++)
        {
            if(isalnum(src[i])||src[i]=='.')
            {
                if(isdigit(src[i]))
                {
                    num_flag=true;
                }
                else if(isalpha(src[i]))
                {
                    alpha_flag=true;
                }
            }
            else
            {
                not_pass=true;
            }
            
        }
        if(not_pass==true)
        {
            cout<<"Your password is tai luan le.";
        }
        else if(num_flag==false)
        {
            cout<<"Your password needs shu zi.";
        }
        else if(alpha_flag==false)
        {
            cout<<"Your password needs zi mu.";
        }
        else
        {
            cout<<"Your password is wan mei.";
        }
        
    }
}

int main()
{
    int num;
    cin>>num;
    string tmp;
    vector<string> det;
    for(int i=0;i<num;i++)
    {
        cin>>tmp;
        det.push_back(tmp);
    }
    for(int i=0;i<det.size();i++)
    {
        check(det[i]);
        if(i!=(det.size()-1))
        {
            cout<<endl;
        }
    }
}