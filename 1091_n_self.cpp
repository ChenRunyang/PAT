#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int src[num];
    for(int i=0;i<num;i++)
    {
        cin>>src[i];
    }
    int det;
    bool flag=false;
    bool det_flag=false;
    int tmp;
    int tmp1;
    int j,m;
    for(int i=0;i<num;i++)
    {
        det_flag=false;
        for(j=1;j<10;j++)
        {
            tmp=src[i];
            flag=false;
            det=tmp*tmp*j;
            m=det;
            while(tmp!=0)
            {
                tmp1=det%10;
                if(tmp1!=(tmp%10))
                {
                    flag=true;
                    break;
                }
                tmp /=10;
                det /=10;
            }
            if(flag==false)
            {
                det_flag=true;
                cout<<j<<" "<<m<<endl;
                break;
            }
        }
        if(det_flag==false)
        {
            cout<<"No"<<endl;
        }
    }
}