#include<iostream>
#include<string>

using namespace std;

int main()
{
    int src1,src2,det;
    cin>>src1>>src2;
    det=src1*src2;
    char arr[1024];
    sprintf(arr,"%d",det);
    for(int i =(strlen(arr)-1);i>=0;i--)
    {
        cout<<arr[i];
    }
}