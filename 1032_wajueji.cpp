#include<iostream>

using namespace std;

int main()
{
	int tim;
	int tmp,mark;
	int max=0,max_flag=1;
	cin>>tim;
	int sor[tim];
	for(auto x:sor)
	{
		x=0;
	}
	for(int i=0;i<tim;i++)
	{
		cin>>tmp>>mark;
		sor[tmp] += mark;
	}
	for(int i=0;i<tim;i++)
	{
		if(max<sor[i])
		{
			max=sor[i];
			max_flag=i;
		}
	}
	cout<<max_flag<<" "<<max<<endl;
}