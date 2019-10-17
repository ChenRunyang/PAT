#include<iostream>
#include<stdio.h>
#include<tuple>

using namespace std;

tuple<int,int,int> reduce(int fenzi,int fenmu)
{
    int zhen=0,flag=0;
    if(fenzi<0)
    {
        fenzi=-fenzi;
        flag=1;
    }
    while(fenmu<=fenzi)
    {
        fenzi-=fenmu;
        zhen++;
    }
    if(flag==1)
    {
        zhen=-zhen;
        if(zhen==0)
        {
            fenzi=-fenzi;
        }
    }
    return make_tuple(zhen,fenzi,fenmu);
}

int gcd(int m,int n)
{
    if(m==0)
    {
        return 1;
    }
    int rem;
    while(n>0)
    {
        rem=m%n;
        m=n;
        n=rem;
    }
    return m;
}
void sim(int *fenzi,int *fenmu)
{
    int flag=0,muflag=0;
    if(*fenzi<0)
    {
        *fenzi=-*fenzi;
        flag=1;
    }
    if(*fenmu<0)
    {
        *fenmu=-*fenmu;
        muflag=1;
    }
    int ma=gcd(*fenzi,*fenmu);
    *fenzi=*fenzi/ma;
    *fenmu=*fenmu/ma;
    if(flag==1)
    {
        *fenzi=-*fenzi;
    }
    if(muflag==1)
    {
        *fenzi=-*fenzi;
    }
}

tuple<int,int> cal(int i,int j,int k,int m,char op)
{
    int fenzi,fenmu;
    switch(op)
    {
        case '+':
            fenmu=j*m;
            fenzi=i*m+k*j;
            break;
        case '-':
            fenmu=j*m;
            fenzi=i*m-k*j;
            break;
        case '*':
            fenmu=j*m;
            fenzi=i*k;
            break;
        case '/':
            fenmu=j*k;
            fenzi=i*m;
            break;
    }
    sim(&fenzi,&fenmu);
    return make_tuple(fenzi,fenmu);
}
int main()
{
    int fenzi_1,fenzi_2,fenmu_1,fenmu_2;
    char op[4]={'+','-','*','/'};
    tuple<int,int,int> fenshu1,fenshu2,fenshu3;
    tuple<int,int>fenshu3_tmp;
    scanf("%d/%d %d/%d",&fenzi_1,&fenmu_1,&fenzi_2,&fenmu_2);
    fenshu1=reduce(fenzi_1,fenmu_1);
    fenshu2=reduce(fenzi_2,fenmu_2);
    for(int i=0;i<4;i++)
    {
        fenshu3_tmp=cal(fenzi_1,fenmu_1,fenzi_2,fenmu_2,op[i]);
        if(get<0>(fenshu1)<0||get<1>(fenshu1)<0)
        {
            cout<<"(";
        }
        if(get<0>(fenshu1)!=0||get<1>(fenshu1)==0)
        {
            cout<<get<0>(fenshu1);
        }
        if(get<1>(fenshu1)!=0)
        {
            if(get<0>(fenshu1)!=0)
            {
                cout<<" ";
            }
            cout<<get<1>(fenshu1)<<"/"<<get<2>(fenshu1);
        }
        if(get<0>(fenshu1)<0||get<0>(fenshu1)<0)
        {
            cout<<")";
        }
        cout<<" "<<op[i]<<" ";
         if(get<0>(fenshu2)<0||get<1>(fenshu2)<0)
        {
            cout<<"(";
        }
        if(get<0>(fenshu2)!=0||get<1>(fenshu2)==0)
        {
            cout<<get<0>(fenshu2);
        }
        if(get<1>(fenshu2)!=0)
        {

            if(get<0>(fenshu2)!=0)
            {
                cout<<" ";
            }
            cout<<get<1>(fenshu2)<<"/"<<get<2>(fenshu2);
        }
         if(get<0>(fenshu2)<0||get<0>(fenshu2)<0)
        {
            cout<<")";
        }
        cout<<" = ";
        if(get<1>(fenshu2)==0&&op[i]=='/'&&get<0>(fenshu2)==0)
        {
            cout<<"Inf";
            continue;
        }
        int m=get<0>(fenshu3_tmp),n=get<1>(fenshu3_tmp);
        fenshu3=reduce(m,n);
        if(get<0>(fenshu3)<0||get<1>(fenshu3)<0)
        {
            cout<<"(";
        }
        if(get<0>(fenshu3)!=0||get<1>(fenshu3)==0)
        {
            cout<<get<0>(fenshu3);
        }
        if(get<1>(fenshu3)!=0)
        {
            if(get<0>(fenshu3)!=0)
            {
                cout<<" ";
            }
            cout<<get<1>(fenshu3)<<"/"<<get<2>(fenshu3);
        }
        if(get<0>(fenshu3)<0||get<1>(fenshu3)<0)
        {
            cout<<")";
        }
        cout<<endl;
    }
}
