#include<iostream>

using namespace std;

typedef struct node
{
  int address;
  int data;
  int next;
}Node;

void my_sort(Node *sor,int first,int res_num)
{
  int k=res_num/2;
  int tmp;
  for(int i=0;i<k;i++)
  {
    tmp=(sor+i)->data;
    (sor+i)->data=(sor+res_num-i)->data;
    (sor+res_num-i)->data=tmp;
  }
}
int main()
{
    int start_add,num,res_num;
    int first=0;
    cin>>start_add>>num>>res_num;
    Node sor[num];
    for(int i=0;i<num;i++)
    {
      cin>>sor[i].address>>sor[i].data>>sor[i].next;
    }
    while(first+res_num<=num)
    {
      my_sort(sor,first,res_num);
      first += res_num;
    }
}