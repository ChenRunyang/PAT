#include<iostream>
#include<string>
#include<vector>


using namespace std;

typedef struct Stu
{
    string name;
    vector<int> things;
}Student;

int main()
{
    int count=0,countpeople=0;
    int peoplenum,thingnum;
    cin>>peoplenum>>thingnum;
    int limit[thingnum];
    for(int i=0;i<thingnum;i++)
    {
        cin>>limit[i];
    }
    vector<Student> det;
    Student tmp;
    int tmp_num;
    int tmp_tmp;
    bool flag=false;
    for(int i=0;i<peoplenum;i++)
    {
        flag=false;
        tmp.things.clear();
        cin>>tmp.name>>tmp_num;
        for(int j=0;j<tmp_num;j++)
        {
            cin>>tmp_tmp;
            for(int k=0;k<thingnum;k++)
            {
                if(limit[k]==tmp_tmp)
                {
                    flag=true;
                    tmp.things.push_back(tmp_tmp);
                }
            }
        }
        if(flag==true)
        {
            det.push_back(tmp);
        }
    }
    for(int i=0;i<det.size();i++)
    {
        cout<<det[i].name<<":";
        for(auto x: det[i].things)
        {
            cout<<" "<<x;
            count++;
        }
        countpeople++;
        cout<<endl;
    }
    cout<<countpeople<<" "<<count;
}