#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int num;
    cin>>num;
    int src[num];
    int tmp;
    int flag=0;
    for(int i=0;i<num;i++)
    {
        cin>>src[i];
    }
    sort(src,&src[num],greater<int>());
    int det;
    for(det=0;det<num;det++)
    {
        if(src[det]<=det)
        {
            break;
        }
    }
    cout<<det;
}