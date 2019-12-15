#include<iostream>
#include<string>
#include<ctype.h>

using namespace std;

int main()
{
	string sor;
	string poi;
	string str;
    getline(cin,sor);
    getline(cin,poi);
    int i=0;
    for(int j=0;j<sor.length();j++)
    {
    	if(sor[j]!=poi[i])
    	{
    		if(isdigit(sor[j])||(sor[j]>='A'&&sor[j]<='Z'))
    		{
    			if(str.find(sor[j])==std::string::npos)
    			{
				    str +=sor[j];
    			}
			}
			else if(sor[i]<'z'&&sor[i]>'a')
			{
				if(str.find(sor[j]-'a'+'A')==std::string::npos)
				  {
    			    str +=(sor[j]-'a'+'A');
				  } 
			}
		}
		else
		{
			i++;
		}
	}
	cout<<str<<endl;
}