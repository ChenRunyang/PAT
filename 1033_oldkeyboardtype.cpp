#include<iostream>
#include<ctype.h>
#include<string>

using namespace std;

int main()
{
  string poi;
  cin>>poi;
  string sor;
  cin>>sor;
  for(int i=0;i<poi.size();i++)
  {
    for(int j=0;j<sor.size();j++)
    {
      if(poi[i]==sor[j])
      {
        sor.erase(j,1);
        j--;
      }
      else if(isalpha(poi[i]))
      {
          if(isupper(poi[i])&&islower(sor[j]))
          {
              if(toupper(sor[j])==poi[i])
              {
                  sor.erase(j,1);
                  j--;
              }
          }
          if(islower(poi[i])&&isupper(sor[j]))
          {
              if(tolower(sor[j])==poi[i])
              {
                  sor.erase(j,1);
                  j--;
              }
          }
      }
      if(poi[i]=='+')
      {
        if(isupper(sor[j]))
        {
          sor.erase(j,1);
          j--;
        }
      }
    }
  }
  cout<<sor;
}