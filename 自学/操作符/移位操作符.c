#include<stdio.h>

int main()
{
    int a = 1;
    // 整形1占4个字节 - 32个比特位
    //00000000000000000000000000000001
    int b = a << 1;
    int c = a << 2;
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d\n",a);
    return 0;
}