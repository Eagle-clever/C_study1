#include<stdio.h>
#include<string.h>

// sizeof()
int main()
{
    int sz = 0;

    int a = 1;
    //sizeof 计算的是变量/类型所占空间大小，单位为字节
    printf("%d\n",sizeof(a));  // 输出 - 4
    printf("%d\n",sizeof(int));// 输出 - 4

    int arr[10] = {0};
    printf("%d\n",sizeof(arr));// 输出 - 40   输出的是字节总大小
    //10*sizeof(int) = 40

    //计算数组的元素个数
    //个数 = 数组总大小/每个元素的大小
    sz = sizeof(arr) / sizeof(arr[1]);
    printf("%d\n",sz);
    return 0;
}