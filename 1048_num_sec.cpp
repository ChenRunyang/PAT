#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    char det[13]={'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
    int a,b;
    string tmp;
    int flag=0;
    cin>>a>>b;
    int a_tmp;
    int b_tmp;
    while(a!=0)
    {
        a_tmp=a%10;
        b_tmp=b%10;
        if(flag==0)
        {
            tmp.push_back(det[(a_tmp+b_tmp)%13]);
            flag++;
        }
        else
        {
            if(b_tmp-a_tmp>=0)
            {
                tmp +=to_string(b_tmp-a_tmp);
            }
            else
            {
                tmp +=to_string(b_tmp-a_tmp+10);
            }
            flag--;
        }
        a /= 10;
        b /= 10;
        
    }
    while(b!=0)
    {
        tmp +=to_string(b%10);
        b /=10;
    }
    reverse(tmp.begin(),tmp.end());
    cout<<tmp;
}