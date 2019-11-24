#include<iostream>
#include<ctype.h>
#include<tuple>

using namespace std;

tuple<int,int> check(int i)
{
    int flag=0;
    int count_0=0;
    int count_1=0;
    while(i!=0)
    {
        flag = i%2;
        if(flag==1)
        {
            count_1++;
        }
        else
        {
            count_0++;
        }
        i /= 2;
    }
    return make_tuple(count_0,count_1);
}

int main()
{
    char src[10001];
    cin.getline(src,10001);
    char *ptr=src;
    int count=0;
    while(*ptr!='\0')
    {
        if(isalpha(*ptr))
        {
            *ptr=(isupper(*ptr)?tolower(*ptr):(*ptr));
            count+=((*ptr)-'a'+1);
        }
        ptr++;
    }
    tuple<int,int> det;
    det=check(count);
    cout<<get<0>(det)<<" "<<get<1>(det);
}