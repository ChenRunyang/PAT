#include<iostream>
#include<sstream>
#include<string>
#include<vector>
#include<string.h>

using namespace std;


int split(const string src,vector<int>& det,string& delim)
{
    if("" ==src)
    {
        return 0;
    }
    char *strs = new char[src.length()+1];
    strcpy(strs,src.c_str());

    char* d=new char[delim.length()+1];
    strcpy(d,delim.c_str());

    char *p= strtok(strs,d);
    while(p)
    {
        string tmp=p;
        det.push_back(stoi(tmp));
        p = strtok(NULL,d);
    }
    return 0;
}
int main()
{
    int num;
    cin>>num;
    string name[num];
    int score[num];
    int max_num=1;
    int max_mark=0;
    int max_flag;
    vector<vector<int> > src;
    vector<int>tmp;
    string flag=("-");
    for(int i=0;i<num;i++)
    {
        cin>>name[i];
        cin>>score[i];
    }
    for(int i=0;i<num;i++)
    {
        split(name[i],tmp,flag);
        src.push_back(tmp);
        tmp.clear();
    }
    for(int i=0;i<num;i++)
    {
        if(src[i][0]>max_num)
        {
            max_num=src[i][0];
        }
    }
    int *team=new int[max_num+1];
    for(int i=0;i<max_num+1;i++)
    {
        *(team+i)=0;
    }
    for(int i=0;i<num;i++)
    {
        *(team+src[i][0]) += score[i];
    }
    for(int i=0;i<max_num+1;i++)
    {
        if(*(team+i)>max_mark)
        {
            max_mark=*(team+i);
            max_flag=i;
        }
    }
    cout<<max_flag<<" "<<max_mark;
}