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
    int flag=0;
    int add_tmp=0;
    string mem[2][13]={{"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"},
    {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"}};
    for(int i=0;i<num;i++)
    {
        getline(cin,src);
        if(isdigit(src[0]))
        {
            tmp=stoi(src);
            if(tmp>13)
            {
                det[i]+=(mem[0][tmp/13]);
                det[i]+=(" ");
                tmp %=13;
            }
                det[i]+=(mem[1][tmp]);
        }
        else
        {
                    for(int n=1;n<13;n++)
                    {
                        if(src.find(mem[0][n])!=string::npos)
                        {
                        add_tmp=n*13;
                        auto b1=src.begin();
                        auto b2=src.begin()+3;
                        src.erase(b1,b2);
                        }
                    }
                
                for(int h=0;h<13;h++)
                {
                    if(src.find(mem[1][h])!=string::npos)
                        {
                        add_tmp += h;
                        auto b1=src.begin();
                        auto b2=src.begin()+3;
                        src.erase(b1,b2);
                        }
                }
                det[i]+=(to_string(add_tmp));
        }
        src.clear();
        add_tmp=0;
    }
    for(int i=0;i<num;i++)
    {
        cout<<det[i]<<endl;
    }
}
