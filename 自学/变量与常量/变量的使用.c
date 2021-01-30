#include<stdio.h>

int main()
{
    //计算两个数的和
    int a = 0;
    int b = 0; 
    //输入数据-使用输入函数scanf
    scanf("%d%d",&a,&b);//取地址符号&
    int c = a + b;
    printf("C = %d\n",c);
    return 0;
}
