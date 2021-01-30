#include<stdio.h>

int main()
{
    int line = 0;  // 变量line 需要提前定义！！！ 注意！！！ 别出错了哈！
    printf("加入CSDN，学习\n");

    while(line<2000)
    {
        printf("敲一行代码（第%ld行）\n",line);
        line++;
    }
    if(line>=2000)
    {
        printf("好offer\n");    
    }
    
    return 0;
}