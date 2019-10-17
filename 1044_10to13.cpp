#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main()
{
    int num;
    cin>>num;
    cin.clear();
    cin.ignore();
    string src;
    string det[num];
    int tmp;
    char mem[2][12][4]={{"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"},
    {"jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"}};
    for(int i=0;i<num;i++)
    {
        getline(cin,src);
        if(isdigit(src[0]))
        {
            tmp=stoi(src);
            if(tmp>12)
            {
                cout<<mem[0][tmp/13];
                tmp %=13;
            }
        }
    }
}
