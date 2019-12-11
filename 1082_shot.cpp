#include<stdio.h>
#include<math.h>
int main()
{
    int n,id,x,y,max=0,min=200,maxid,minid;
    float h;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d%d",&id,&x,&y);
        h=sqrt(x*x+y*y);
        if(h>max)
        {
            max=h;
            maxid=id;
        }
        if(h<min)
        {
            min=h;
            minid=id;
        }
    }
    printf("%04d %04d\n",minid,maxid);
return 0;
}