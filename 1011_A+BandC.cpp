#include<stdio.h>

int main()
{
  int i,j;
  scanf("%d",&i);
 long k[i],m[i],n[i];
  char *ptr1=" false";
  char *ptr2=" true";
  for(j=0;j<i;j++)
  {
    scanf("%ld%ld%ld",&k[j],&m[j],&n[j]);
  }
  for(j=0;j<i;j++)
  {
    printf("Case #%d:%s\n",j+1,(k[j]+m[j]>n[j])?ptr2:ptr1);
  }
