#include<iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int src[num][4];
    int det[2]={0};
    int flag_a=0,flag_b=0;
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>src[i][j];
        }
    }
    for(int i=0;i<num;i++)
    {
        if(src[i][1]==src[i][0]+src[i][2])
        {
            flag_a++;
        }
        if(src[i][3]==src[i][0]+src[i][2])
        {
            flag_b++;
        }
        if(flag_a>flag_b)
        {
            det[1]++;
        }
        else if(flag_a<flag_b)
        {
            det[0]++;
        }
        flag_a=0;
        flag_b=0;
    }
    cout<<det[0]<<" "<<det[1];
}