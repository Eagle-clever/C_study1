#include<stdio.h>
#include<string.h>

int main()
{
    printf("%d\n",strlen("c:\test\32\test.c")); // 转义字符看作一个字符
    printf("%c\n",'\32');
    printf("%c\n",'\132'); // Z
    // \32 -- 32是2个8进制数字
    // 32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
    // 32 -- > 10进制 26 ->作为ASCII码值代表的数字
    printf("%c\n",'\x61'); // a
    printf("%c\n",'\x77'); // w
    return 0;
}