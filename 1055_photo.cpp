#include<iostream>

using namespace std;

typedef struct people
{
    string name;
    int height;
}Peo;

bool compare(Peo x,Peo y)
{
    if(x.height==y.height)
    {
        return x.name<y.name;
    }
    else
    {
        return x.height>y.height;
    }
    
}
int main()
{
    int peo_num,line_num;
    cin>>peo_num>>line_num;
     int peer_num =peo_num/line_num;
    Peo src[peo_num];
    for(int i=0;i<peo_num;i++)
    {
        cin>>src[i].name>>src[i].height;
    }
    sort(&src[0],&src[peo_num],compare);
    Peo * ptr=src;
    int last=peer_num +peo_num%line_num;
    Peo last_line[last];
    Peo peer_line[peer_num];
    Peo * d_ptr=&(last_line[last/2]);
    Peo * p_ptr;
    for(int i = 0;i<last;i++)
    {
        if(i%2==0)
        {
            d_ptr +=i;
            d_ptr->name=ptr->name;
            d_ptr->height=ptr->height;
        }
        else
        {
            d_ptr -=i;
            d_ptr->name=ptr->name;
            d_ptr->height=ptr->height;
        }
        ptr++;
    }
    for(int i=0;i<last-1;i++)
    {
        cout<<last_line[i].name<<" ";
    }
    cout<<last_line[last-1].name;
    cout<<endl;
    for(int i=0;i<(line_num-1);i++)
    {
        p_ptr = &(peer_line[peer_num/2]);
        for(int j=0;j<peer_num;j++)
        {
            if(j%2==0)
            {
                p_ptr +=j;
                p_ptr->name=ptr->name;
                p_ptr->height=ptr->height;
            }
            else
            {
                p_ptr -=j;
                p_ptr->name=ptr->name;
                p_ptr->height=ptr->height;
            }
            ptr++;
        }
        for(int i=0;i<peer_num-1;i++)
        {
            cout<<peer_line[i].name<<" ";
        }
        cout<<peer_line[peer_num-1].name;
        cout<<endl;
    }
}