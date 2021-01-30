#include<stdio.h>
//举例
// &&  ||
int main()
{
    // 真 - 非零
    // 假 - 0
    // && - 逻辑与
    int a = 3;
    int b = 5;
    int c = 0;
    int d = a&&b;
    int e = a&&c;
    printf("%d\n",d); // 输出 1
    printf("%d\n",e); // 输出 0
    // || -- 逻辑或
    d = a||b;
    e = a||c;
    printf("%d\n",d); // 输出 1
    printf("%d\n",e); // 输出 1 
    return 0;
}