#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int row_num,col_num,TOL;
    int q,w,e;
    int r=0;
    cin>>col_num>>row_num>>TOL;
    int src[row_num][1001];
    bool find_flag=false;
    bool com_flag=true;
    for(int i=0;i<row_num;i++)
    {
        for(int j=0;j<col_num;j++)
        {
            cin>>src[i][j];
        }
    }
    int k,l,m,n;
    for(int i=0;i<row_num;i++)
    {
        for(int j=0;j<col_num;j++)
        {
            if(i==0)
            {
                k=0;
                m=1;
            }
            else if(i==(row_num-1))
            {
                k=-1;
                m=0;
            }
            else
            {
                k=-1;
                m=1;
            }
            if(j==0)
            {
                l=0;
                n=1;
            }
            else if(j==(col_num-1))
            {
                l=-1;
                n=0;
            }
            else
            {
                l=-1;
                n=1;
            }
            com_flag=true;
            for(;k<=m;k++)
            {
                for(;l<=n;l++)
                {
                    if(abs(src[i][j]-src[i+k][j+l])<TOL)
                    {
                        com_flag=false;
                    }
                }
            }
            if(com_flag==true)
            {
                if(find_flag==false)
                        {
                            find_flag=true;
                            q=i;
                            w=j;
                            e=src[i][j];
                        }
                        else
                        {
                            r=1;
                        }
            }
        }
    }
    if(find_flag==false)
    {
        cout<<"Not Exist";
    }
    else if(r==1)
    {
        cout<<"Not Unique";
    }
    else
    {
        cout<<"("<<w+1<<", "<<q+1<<"): "<<e;
    }
}