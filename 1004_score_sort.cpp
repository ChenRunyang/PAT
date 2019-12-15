#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
  int i,j,mark;
  int max_flag,min_flag;
  int max_num=0;
  int min_num=100;
  scanf("%d",&i);
  getchar();
  char name[i][100];
  char num[i][100];
  for(j=0;j<i;j++)
  {
    scanf("%s %s %d",&(name[j][0]),&(num[j][0]),&mark);
    if(mark>max_num)
    {
      max_num=mark;
      max_flag=j;
    }
    if(mark<min_num)
    {
      min_num=mark;
      min_flag=j;
    }
  }
  printf("%s %s\n",&(name[max_flag][0]),&(num[max_flag][0]));
  printf("%s %s\n",&(name[min_flag][0]),&(num[min_flag][0]));
}

