#include<stdio.h>

int main()
{
    int a = 3.14; //出现警告 “从‘double’转到‘int’，可能丢失数据”
    printf("%d\n",a);// 也可能不出现警告，但会只保留整数（此输出 3）
    //如果想强制改类型，就用   (类型)
    a = (int)3.14;
    printf("%d\n",a); // 这样就不会出现警告了
    return 0;
}