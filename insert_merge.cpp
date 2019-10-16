#include<iostream>
#include"math.h"

using namespace std;

int step=2;
int me_sort(int *src,int deep,int num)
{
    if(deep<=1)
    {
        return 0;
    }
    int tmp1[step+1];
    int tmp2[step+1];
    tmp1[step]=1024;
    tmp2[step]=1024;
    for(int i=0;i<num;)
    {
        for(int j=0;j<step;j++)
        {
            tmp1[j]=*(src+i+j);
            tmp2[j]=*(src+i+j+step);
        }
        int *p=tmp1;
        int *q=tmp2;
        for(int j=0;j<step*2;j++)
        {
            if(*p<*q)
            {
                *(src+j)=*p;
                p++;
            }
            else
            {
                *(src+j)=*q;
                q++;
            }
        }
    }
}

void in_sort(int *src,int num)
{
    int i;
    for(i=num-1;i>=0;i--)
    {
        if(*(src+i)<*(src+num))
        {
            break;
        }
    }
    int tmp=*(src+num);
    for(int j=num-1;j>i;j--)
    {
        *(src+j+1)=*(src+j);
    }
    *(src+i+1)=tmp;
}

int main()
{
    int num;
    cin>>num;
    int src[num];
    int det[num];
    int in_tmp[num+1];
    int me_tmp[num+1];
    int choose=0;
    int b_flag=1024;
    int deep=1;
    int deep_num=0;
    for(int i=0;i<num;i++)
    {
        cin>>src[i];
    }
    for(int i=0;i<num;i++)
    {
        cin>>det[i];
    }
    for(int i=0;i<num;i++)
    {
        in_tmp[i]=src[i];
        me_tmp[i]=src[i];
    }
    for(;deep<=num;deep *=2)
    {
        deep_num++;
    }
    for(int i=0;i<num;i++)
    {
        in_sort(in_tmp,i);
        me_sort(me_tmp,deep_num,num);
        deep_num--;
        int in_flag=0;
        int me_flag=0;
        if(b_flag==0)
        {
            break;
        }
        for(int j=0;j<num;j++)
        {
            if(det[j]!=in_tmp[j])
            {
                in_flag=1;
            }
            if(det[j]!=me_tmp[j])
            {
                me_flag=1;
            }
        }
        if(in_flag == 0)
        {
            choose=1;
            b_flag=2;
        }
        if(me_flag == 0)
        {
            choose=2;
            b_flag=2;
        }
        b_flag--;
    }
    if(choose==1)
    {
        int i;
        cout<<"Insertion Sort"<<endl;
        for(i=0;i<num-1;i++)
        {
            cout<<in_tmp[i]<<" ";
        }
        cout<<in_tmp[i];
    }
    if(choose==2)
    {
        int i;
        cout<<"Merge Sort"<<endl;
        for(i=0;i<num-1;i++)
        {
            cout<<me_tmp[i]<<" ";
        }
        cout<<me_tmp[i];
    }
}
