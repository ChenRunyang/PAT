#include<stdio.h>
#include<string.h>

void swp(char *ptr1,char *ptr2,int i)
{
  char tmp;
  for(i /=2;i>=0;i--)
  {
    tmp=*(ptr1+i);
    *(ptr1+i)=*(ptr2-i);
    *(ptr2-i)=tmp;
  }
}

int main()
{
  char str[1024];
  gets(str);
  char *ptr1=str;
  char *ptr2=str;
  while(*ptr2!='\0')
  {
    ptr2++;
  }
  ptr2--;
  swp(ptr1,ptr2,ptr2-ptr1);
  ptr2=str;
  while(*ptr2!='\0')
  {
    while(*ptr2!=' '&&*ptr2!='\0')
    {
      ptr2++;
    }
    if(*ptr2=='\0')
    {
        ptr2--;
        swp(ptr1,ptr2,ptr2-ptr1);
        break;
    }
    ptr2--;
    swp(ptr1,ptr2,ptr2-ptr1);
    ptr1=ptr2+2;
    ptr2=ptr2+2;
  }
  printf("%s",str);
}
