#include<stdio.h>

int main()
{
    int input = 0;
    printf("加入CSDN\n");
    printf("你要好好学习吗？（1/0）>:");
    scanf("%d",&input);  // 1/0
    if(input = 1)
    {
        printf("好offer\n");
    }
    else
    {
        printf("买红薯\n");
    }
    return 0;    
}