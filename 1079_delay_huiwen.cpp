#include<iostream>

using namespace std;

int palindrmic(int srcnum)
{
    int num=srcnum;
    int det=0;
    while(num!=0)
    {
        det += num%10;
        num /= 10;
        det *=10;s
    }
    det /=10;
    return det;
    
}

int main()
{
    int num;
    cin>>num;
    int detnum;
    int num2;
    bool flag=false;
    for(int i=0;i<10;i++)
    {
       num2=palindrmic(num);
       if(num2==num)
       {
           flag=true;
           break;
       }
       else
       {
           detnum=num+num2;
           cout<<num<<" + "<<num2<<" = "<<detnum<<endl;
           num=detnum;
       }
    }
    if(flag==true)
    {
        cout<<num<<" is a palindromic number.";
    }
    else
    {
        cout<<"Not found in 10 iterations.";
    }

}