#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    int peo_num,first_win,space;
    cin>>peo_num>>space>>first_win;
    map<int,string> src;
    vector<string> det;
    string tmp;
    for(int i=1;i<=peo_num;i++)
    {
        cin>>tmp;
        src[i]=tmp;
    }
    bool flag;
    int next_flag=0;
    for(int i=first_win;i<=peo_num;i +=space)
    {
        next_flag=0;
next_time: flag = false;
        if(i+next_flag>peo_num)
        {
            break;
        }
        tmp=src[i+next_flag];
        for(int j=0;j<det.size();j++)
        {
            if(det[j]==tmp)
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            next_flag++;
            goto next_time;
        }
        else
        {
            det.push_back(tmp);
        }
    }
    if(det.size()>0)
    {
        for(auto x:det)
        {
            cout<<x<<endl;
        }
    }
    else
    {
        cout<<"keep going...";
    }
    
}