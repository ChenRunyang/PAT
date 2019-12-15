#include<iostream>

using namespace std;

int main()
{
  int i;
  int j=0;
  int a[3]={0};
  cin>>i;
  while(i!=0)
  {
    a[j]=i%10;
    i=i/10;
    j++;
  }
  for(i=0;i<a[2];i++)
  {
    printf("B");
  }
  for(i=0;i<a[1];i++)
  {
    printf("S");
  }
  for(i=1;i<=a[0];i++)
  {
    printf("%d",i);
  }
}