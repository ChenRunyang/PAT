#include<iostream>
#include<math.h>
using namespace  std;

int main()
{
    int num;
    int tmp2,m;
    cin>>num;
    int src[num];
    int det[num];
    for(int i=0;i<num;i++)
    {
        cin>>src[i];
    }
    double tmp_m,n;
    tmp_m =sqrt(num);
    int tmp=(int)tmp_m;
    for(n=tmp;n>0;n++)
    {
        m=(double)num/(double)n;
        tmp2=m;
        if(m==tmp2)
        {
            break;
        }
    }
    sort(src[0],src[num],less<int>());
    int n_flag=0,m_flag=0;
    int *p=det;
    for(int i=n;i>0;i--)
    {
        if(n_flag==0)
        {
            
        }
    }
}