#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // 0-9
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }
    // printf("%d\n",arr[4]); // 下标的方式访问元素
    return 0;
}