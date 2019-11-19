#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int num,d,tmp,j;
    int perhap=0;
    int sure = 0;
    float e,det;
    cin>>num>>e>>d;
    int battle[num][2];
    for(auto x:battle)
    {
        x=0;
    }

    for(int i=0;i<num;i++)
    {
        cin>>tmp;
        for(j=0;j<tmp;j++)
        {
            cin>>det;
            if(det<e)
            {
                battle[i][0]++;
            }
            else
            {
                battle[i][1]++;
            }
        }
        if(battle[i][0]>battle[i][1])
        {
            perhap++;
            if(tmp>d)
            {
                sure++;
            }
        }
    }
    printf("%.1lf%% %.1lf%%",(((float) (perhap-sure)/num)*100),(((float) sure/num)*100));
    
}