#include <iostream>
using namespace std;
int main(){
  int N;
  int sum=0,count=1;
  int a[100000]={0};
  cin>>N;
  for(int i=0;i<=N;i++){
    sum = i/2+i/3+i/5;
    a[i]=sum;
  }
  for(int j=0;j<N;j++){
    if(a[j]!=a[j+1]){
      count++;
    }
  }
  cout<<count;
  return 0;
}