#include<iostream>

using namespace std;

int main()
{
    int student_num,question_num;
    cin>>student_num>>question_num;
    int mark[question_num];
    int true_ans[question_num];
    for(int i=0;i<question_num;i++)
    {
        cin>>mark[i];
    }
    for(int i=0;i<question_num;i++)
    {
        cin>>true_ans[i];
    }
    int str_ans[question_num];
    int all_mark[student_num];
    for(int i=0;i<student_num;i++)
    {
        all_mark[i]=0;
        for(int j=0;j<question_num;j++)
        {
            cin>>str_ans[j];
            if(str_ans[j]==true_ans[j])
            {
                all_mark[i] +=mark[j];
            }
        }
    }
    for(int i=0;i<student_num;i++)
    {
        cout<<all_mark[i];
        if(i!=student_num-1)
        {
            cout<<endl;
        }
    }
}