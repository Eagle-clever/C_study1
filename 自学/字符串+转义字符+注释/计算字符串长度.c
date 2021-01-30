#include<stdio.h>
#include <string.h>

int main()
{
    char arr1[] = "abc";
    char arr2[] = {'a','b','c'};
    char arr3[] = {'a','b','c','\0'};
    //strlen - string length - 计算字符串长度
    printf("%ld\n",strlen(arr1));//3
    printf("%ld\n",strlen(arr2));//随机值 
    printf("%ld\n",strlen(arr3));//3
    return 0;
}
//注：字符串的结束标志是一个 \0 的转义字符。在计算机计算字符串长度的时候 \0 是结束标志，不算作字符串内容。



// 数据在计算机上储存时，储存的是二进制 
// a - 97
// A - 65
// …………
// ASCII 编码
// ASCII 码值