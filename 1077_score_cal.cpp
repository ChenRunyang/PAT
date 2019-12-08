#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int round(float num)
{
    return (num>0.0)?(num+0.5):(num-0.5);
}

int main()
{
    int num,perfect;
    cin>>num>>perfect;
    int teacher[num];
    int student[num];
    vector<int>tmp;
    int tmp_tmp;
    for(int i=0;i<num;i++)
    {
        cin>>teacher[i];
        tmp.clear();
        for(int j=0;j<num-1;j++)
        {
            cin>>tmp_tmp;
            if(tmp_tmp>=0&&tmp_tmp<=perfect)
            {
                tmp.push_back(tmp_tmp);
            }
        }
        tmp_tmp=0;
        sort(tmp.begin(),tmp.end());
        for(int j=1;j<(tmp.size()-1);j++)
        {
            tmp_tmp+=tmp[j];
        }
        student[i]=tmp_tmp/(tmp.size()-2);
    }
    for(int i=0;i<num;i++)
    {
        cout<<round((float)((float)teacher[i]+(float)student[i])/2);
        if(i!=num-1)
        {
            cout<<endl;
        }
    }
}