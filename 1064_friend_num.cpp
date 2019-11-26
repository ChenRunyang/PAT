#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int check(int src)
{
    int det=0;
    while (src)
    {
        det+=src%10;
        src /= 10;
    }
    return det;
}
int main()
{
    int num;
    cin>>num;
    int src[num];
    map<int,bool> det;
    int tmp;
    for(int i=0;i<num;i++)
    {
        cin>>tmp;
        det[check(tmp)]=true;
    }
    cout<<det.size()<<endl;
    map<int,bool>::iterator x;
    int flag=0;
    for(x=det.begin();x!=det.end();x++)
    {
        flag++;
        cout<<x->first;
        if(flag!=det.size())
        {
            cout<<" ";
        }
    }
}
