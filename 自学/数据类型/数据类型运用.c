#include<stdio.h>


//char - 字符类型
//short int  - 短整型
//int - 整型                    内存上的区别
//long - 长整型

//%d - 打印整型
//%c - 打印整型
//%f - 打印字符
//%p - 以地址的形式打印
//$x - 打印16进制
//%o …………
int main()
{
    //char - 字符类型
    char ch = 'A';//内存
    printf("%c\n",ch);//%c ———— 打印字符格式的数据
    //char - 字符类型
    int age = 20;
    printf("%d\n",age);//%d ————打印十进制整形
    //long - 长整型
    long num = 100;
    printf("%ld\n",num);
    //float - 单精度浮点数、浮点型
    float f = 5.0;
    printf("%f\n",f);
    //double - 双精度浮点数、浮点型
    double e = 3.14159265359;
    printf("%f\n",e);
    return 0;
}
