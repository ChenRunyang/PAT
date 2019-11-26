#include<iostream>
#include<cstdio>
using namespace std;
int gcd(int a,int b){//最大公约数
return b==0 ? a:gcd(b,a%b);
}
int gcm(int a,int b){//最小公倍数 两数相乘/最大公约数
 int temp=gcd(a,b);
 int t=a*b/temp;
 return t;
}
int main(){
    int q[1005],j=0,a,b,c,d,e;
    scanf("%d/%d %d/%d %d",&a,&b,&c,&d,&e);
    int t=gcm(b,d);
    int t1=gcm(t,e);//找出分母与e的最小公倍数
    int first=a*t1/b,end1=c*t1/d;//从小到大遍历
    if(first>end1){//注意，题目给的2个数不一定左小右大
        swap(first,end1);
    }
    int g=t1/e;
    for(int i=first+1;i<end1;i++){
        if(i%g==0 && gcd(i/g,e)==1)//最简分数，只要判断i/g与e的最大公约数是1
            q[j++]=i/g;
    }
    printf("%d/%d",q[0],e);
    for(int i=1;i<j;i++){
        printf(" %d/%d",q[i],e);
    }
 return 0;
}