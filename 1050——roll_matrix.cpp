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
    double tmp1_m,n;
    tmp1_m =sqrt(num);
    int tmp=(int)tmp1_m;
    for(n=tmp;n>0;n++)
    {
        m=(double)num/(double)n;
        tmp2=m;
        if(m==tmp2)
        {
            break;
        }
    }
    sort(&src[0],&src[num],greater<int>());
    int tmp_m=m,tmp_n=n;
    int n_flag=0,m_flag=0;
    int *q=src;
    int *p=det;
    for(int i=0;i<n;i++)
    {
        *p=*q;
        p++;
        q++;
        n_flag++;
    }
    p--;
    q--;
    m--;
    n--;
    for(int i=0;i<m;i++)
    {
        q++;
        p +=tmp_n;
        *p=*q;
        m_flag++;
    }
    m--;
    while(n!=0)
    {
        
        if(n_flag==0)
        {
            for(int i=0;i<n;i++)
            {
            q++;
            p--;
            *p=*q;
            n_flag++;
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
            q++;
            p++;
            *p=*q;
            n_flag--;
            }
        }
        n--;
        if(m_flag==0)
        {
            for(int i=0;i<m;i++)
            {
            q++;
            p +=tmp_n;
            *p=*q;
            m_flag++;
            }
        }
        else
        {
            for(int i=0;i<m;i++)
            {
            q++;
            p -=tmp_n;
            *p=*q;
            m_flag--;
            }
        }
        m--;
    }
    for(int i=0;i<num;i++)
    {
        cout<<det[i]<<"  ";
    }
}