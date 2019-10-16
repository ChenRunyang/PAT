#include<iostream>

using namespace std;

struct sit
{
    char set_num[17];
    int demo_set;
    int real_set;
};

int main()
{
    int num;
    cin>>num;
    struct sit src[num];
    for(int i=0;i<num;i++)
    {
        cin>>src[i].set_num>>src[i].demo_set>>src[i].real_set;
    }
    int f_num;
    int tmp;
    cin>>f_num;
    for(int i=0;i<f_num;i++)
    {
        cin>>tmp;
        for(int j=0;j<num;j++)
        {
            if(src[j].demo_set==tmp)
            {
                cout<<src[j].set_num<<" "<<src[j].real_set<<endl;
            }
        }
    }
}
