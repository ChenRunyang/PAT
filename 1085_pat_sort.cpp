#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
typedef struct{
    char name[10];
    double sum;
    int size;
}school;

int find(school *a,int N,char *string){
    for(int i=0;i<N;i++){
        if(!strcmp(a[i].name,string))
            return i;
    }
    return -1;
}
bool cmp(school a,school b){
    if(a.sum >b.sum)
        return true;
    else if(a.sum == b.sum){
        if(a.size <b.size)
            return true;
        else if(a.size == b.size)
            return (strcmp(a.name,b.name)>0)?false:true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    int N;
    scanf("%d",&N);
    school* data = (school*)malloc(sizeof(school)*N);
    char temp_id[10];   
    char temp_name[10];
    double score;
    int index,j=0;
    char ch;
    for(int i=0;i<N;i++){
        scanf("%s %lf %s",temp_id,&score,temp_name);    
        int len = strlen(temp_name);    
        for(int i=0;i<len;i++)
            temp_name[i] =tolower(temp_name[i]);
        index = find(data,N,temp_name);
        if(index == -1){
            index = j++;
            strcpy(data[index].name,temp_name);
            data[index].sum=0;
            data[index].size=0;     
        }
        data[index].size++;
        switch(temp_id[0]){
            case 'A':
                data[index].sum+=score;
                break;
            case 'B':
                data[index].sum+=score/1.5;
                break;
            case 'T':
                data[index].sum+=score*1.5;
        }
    }
    std::sort(data,data+j,cmp);
    printf("%d\n",j);
    int k=1,now,sum=0;   
    for(int i=0;i<j;i++){
        now = (int) data[i].sum;
        k = (now ==sum)?k:i+1;
        sum =now;
        printf("%d %s %d %d\n",k,data[i].name,now,data[i].size);
    }

    return 0;
}
