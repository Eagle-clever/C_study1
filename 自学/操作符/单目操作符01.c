#include<stdio.h>
 int main()
 {
    int a = -2; // 负号
    int b = +10;// 通常正号省略
    int c = 0;
    printf("%d\n",a); // 输出 -2
    printf("%d\n",b); // 输出 11
    printf("%d\n",!b);// 输出 0 (10为真，非真为假)
    printf("%d\n",c);;// 输出 0 
    printf("%d\n",!c);// 输出 1 (0为假,非假为真)
    //在C语言中 0 为假，其他数为真
    return 0;
 }