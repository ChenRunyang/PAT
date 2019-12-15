#include<cstdio> 
int main()
{
    int sum=0;
    char ch,s[4];                       //ch作为临时变量保存输入的每一个字符，s保存sum的每一个数字                        
    char b[10][5]={"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    while ((ch = getchar()) != '\n')    //如果一直输入字符，不按回车的话 
        sum += (ch - '0');
    sprintf(s, "%d", sum);              // sprintf(char *buffer, const char *format,[ argument])将任意类型数据按某种格式转换成字符串 
    for (int i = 0; s[i] != 0; i++){
        if (i > 0) 
            printf(" ");
        printf("%s", b[s[i]-'0']);
    }
    return 0;
}