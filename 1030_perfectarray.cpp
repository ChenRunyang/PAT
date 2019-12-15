#include<iostream>
#include<string>
#include<ctype.h>
#include<algorithm>
#include<vector>
using namespace std;

void print(vector<int> i)
{
	for(vector<int>::iterator it=i.begin();it!=i.end();it++)
	{
		cout<<*it;
	}
}
int main()
{
	int tim,q;
	int b=0;
	int sum=0;
	cin>>tim>>q;
	vector<int> sor;
	for(int i=0;i<tim;i++)
	{
		int tmp;
		cin>>tmp;
		sor.push_back(tmp);
	}
	sort(sor.begin(),sor.end());
	for(int a=0;a<tim;a++)
	{
		if(sor[a]>sor[b]*q)
		{
			++b;
		}
		else
		{
			sum=sum>a-b?sum:a-b;
		}
	}
	cout<<sum+1<<endl;
}