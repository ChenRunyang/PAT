#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
typedef struct{
  string zkz;
  int score;
}stu;
bool cmp1(stu a,stu b){
    if(a.score!=b.score) return a.score>b.score;
    return a.zkz<b.zkz;
}
int main(){
   int n,m;
   cin>>n>>m;
  vector<stu> v(n);
   for(int i=0;i<v.size();i++)
    cin>>v[i].zkz>>v[i].score;
   for(int q=1;q<=m;q++){
    int x;
    cin>>x;
    if(x==1){
        vector<stu> ans;
        char c; cin>>c;
    printf("Case %d: %d %c\n",q,x,c);
         for(int i=0;i<n;i++){
            if(v[i].zkz[0]==c)
                ans.push_back(v[i]);
         }
         sort(ans.begin(),ans.end(),cmp1);
         if(ans.size()){
            for(int i=0;i<ans.size();i++)
            printf("%s %d\n",ans[i].zkz.c_str(),ans[i].score);
         }
         else cout<<"NA"<<endl;
    }
    else if(x==2){
        string kc;
        int sum=0,num=0;
        cin>>kc;
        printf("Case %d: %d %s\n",q,x,kc.c_str());
        for(int i=0;i<n;i++){
            string bk=v[i].zkz.substr(1,3);
            if(bk==kc)
                num++,sum+=v[i].score;
         }
        if(num)
        printf("%d %d\n",num,sum);
        else cout<<"NA"<<endl;
    }
    else if(x==3){
      map<string,int> mapp;
      vector<stu> ans;
      string s1;
      cin>>s1;
      printf("Case %d: %d %s\n",q,x,s1.c_str());
       for(int i=0;i<n;i++){
        string bk=v[i].zkz.substr(4,6);
        if(bk==s1){
          string t=v[i].zkz.substr(1,3);
          mapp[t]++;
        }
       }
        map<string,int> ::iterator it;
            for(it=mapp.begin();it!=mapp.end();it++)
            ans.push_back({it->first,it->second});
            sort(ans.begin(),ans.end(),cmp1);
            if(ans.size())
            for(int i=0;i<ans.size();i++)
                printf("%s %d\n",ans[i].zkz.c_str(),ans[i].score);
            else cout<<"NA"<<endl;
    }
   }
   return 0;
}