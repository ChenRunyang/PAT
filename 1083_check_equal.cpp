#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
using namespace std;
 
typedef struct node{
    int num=0;
    int dis;
}card;
 
int cmp(const void *a,const void *b){
    return (((card*)a)->dis > ((card*)b)->dis ? -1 : 1);
}
 
int main()
{
    int n,i,j,num;
    int count = 0,d;
    struct node s[10000];
    scanf("%d",&n);
    for (i = 0;i < n;i++){
        int flag = 0;
        scanf ("%d",&num);
        d = abs(i+1 - num);
        for (j = 0;j < count;j++){
            if (d==s[j].dis){
                s[j].num++;
                flag = 1;
                break;
            }
        }
        if (flag==0){
            s[count].dis = d;;
            s[count++].num++;
        }
    }
    qsort(s,count,sizeof(s[0]),cmp);
    for (i=0;i<count;i++){
        if (s[i].num>=2)
            printf("%d %d\n",s[i].dis,s[i].num);
    }
    return 0;
}