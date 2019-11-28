#include<iostream>

using namespace std;

int main()
{
    int row_num,col_num,left,right,det;
    cin>>row_num>>col_num>>left>>right>>det;
    int src[row_num][501];
    for(int i=0;i<row_num;i++)
    {
        for(int j=0;j<col_num;j++)
        {
            cin>>src[i][j];
            if(src[i][j]>=left&&src[i][j]<=right)
            {
                src[i][j]=det;
            }
        }
    }
    for(int i=0;i<row_num;i++)
    {
        for(int j=0;j<col_num;j++)
        {
            printf("%03d",src[i][j]);
            if(j!=col_num-1)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}