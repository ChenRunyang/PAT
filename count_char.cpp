#include<iostream>
#include<stdio.h>
#include<cstring>

using namespace std;

int main()
{
    char src[1001];
    cin.getline(src,1001);
    int cou[26]={0};
    for(int i=0;i<strlen(src);i++)
    {
        if(isalpha(src[i]))
        {

            cou[tolower(src[i])-'a']++;
        }
    }
    int max_num=0;
    int max_flag=0;
    for(int i=0;i<26;i++)
    {
        if(cou[i]>max_num)
        {
            max_num=cou[i];
            max_flag=i;
        }
    }
    cout<<char ('a'+max_flag)<<max_num;
}
