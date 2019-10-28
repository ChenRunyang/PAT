#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num;
    cin>>num;
    double src[num];
    double count=0;
    double inner_count=0;
    double local_count=0;
    for(int i=0;i<num;i++)
    {
        cin>>src[i];
    }
    for(int i=1;i<=num;i++)
    {
        for(int j=0;j<=num-i;j++)
        {
            for(int k=0;k<i;k++)
            {
                local_count +=src[j+k];
            }
            inner_count +=local_count;
            local_count=0;
        }
        count+=inner_count;
        inner_count=0;
    }
    cout<<fixed<<setprecision(2)<<count<<endl;
}