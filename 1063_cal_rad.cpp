#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num;
    cin>>num;
    int src[num][2];
    double max_sem=0;
    double tmp=0;
    for(int i=0;i<num;i++)
    {
        cin>>src[i][0]>>src[i][1];
        tmp=sqrt(src[i][0]*src[i][0]+src[i][1]*src[i][1]);
        if(tmp>max_sem)
        {
            max_sem=tmp;
        }
    }
    printf("%.2f",max_sem);
}