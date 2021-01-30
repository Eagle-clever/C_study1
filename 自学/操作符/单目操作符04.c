#include<stdio.h>
// ++
int main()
{
    int a = 10;
    int b = a++;//后置++，先使用，再++
    printf("a = %d  b = %d\n",a,b);     // 输出 a = 11  b = 10
    a = 10;
    int c = ++a;//前置++，先++，再使用
    printf("a = %d  c = %d\n",a,c);     // 输出 a = 11  b = 11
    return 0;
}

// #include<stdio.h>
// // --
// int main()
// {
//     int a = 10;
//     int b = a--;//后置--，先使用，再--
//     printf("a = %d  b = %d\n",a,b);     // 输出 a = 9  b = 10
//     a = 10;
//     int c = --a;//前置--，先--，再使用
//     printf("a = %d  c = %d\n",a,c);     // 输出 a = 9  b = 9
//     return 0;
// }