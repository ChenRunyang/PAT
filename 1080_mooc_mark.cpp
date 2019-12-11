#include<iostream>
#include<map>
#include<set>
using namespace std;
struct student
{
	string name;
	int score[4] = {-1,-1,-1,-1};
};
struct rule
{
	bool operator()(const student& a, const student& b)
	{
		if (a.score[3] != b.score[3])
			return a.score[3] > b.score[3];
		else
			return a.name < b.name;
	}
};
int main()
{
	map < string,student> re;
	set<student,rule>res;
	int a, b, c,d;
	cin >> a >> b >> c;
	string str;
	for (int i = 0; i < a; i++)
	{
		cin >> str>> d;
		if (d >= 200)
			re[str].score[0] = d;;
	}
	for (int i = 0; i < b; i++)
	{
		cin >> str>>d;
		if(re[str].score[0]>=0)
			re[str].score[1]=d;
	}
	for (int i = 0; i < c; i++)
	{
		cin >> str>>d;
		if (re[str].score[0]>=0)
		{
			re[str].score[2] = d;
			if (re[str].score[1] > re[str].score[2])
				re[str].score[3] = (re[str].score[1] * 0.4 + re[str].score[2] * 0.6) + 0.5;
			else
				re[str].score[3] = re[str].score[2];
		}
	}
	map<string, student>::iterator it;
	for (it = re.begin(); it != re.end(); it++)
	{
		student stu;
		stu.name = it->first;
		for (int i = 0; i < 4; i++)
			stu.score[i] = it->second.score[i];
		res.insert(stu);
	}
	set<student,rule>::iterator it1;
	for (it1 = res.begin(); it1 != res.end(); it1++)
		if (it1->score[3] >= 60)
		{
			cout << it1->name;
			for (int i = 0; i < 4; i++)
				cout << " " << it1->score[i];
			cout << endl;
		}
	return 0;
}