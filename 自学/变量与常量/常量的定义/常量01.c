#include<stdio.h>

int main()
{
    //字面常量
    4;
    10;

    //const - 常属性
    //const修饰的常变量
    const int num = 4;//num是变量，但是又有常属性，所以我们说num是常变量
    //在需要常量的地方用不了常变量，常变量可以表达一个不变的量
    printf("%d\n",num);
    return 0;
}