#include<stdio.h>

int main()
{
    int a = 3;
    int b = 6;
    int c = 0;
    c = a > b ? a : b;
    //a > b 为表达式1，a为表达式2，b为表达式3
    //该语句的意思为：如果a>b,则将a的值赋给c，否则将b的值赋给c
    return 0;
}
// 与以下代码相同
// int a = 3;
// int b = 6;
// int c = 0;
// if (a > b)
// {
// c = a;
// }
// else
// {
// c = b;
// }