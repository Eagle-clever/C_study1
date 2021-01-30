#include<stdio.h>

//枚举常量
//枚举 - 一一列举
//
//性别：男，女，保密
//三原色：红，蓝，黄

//枚举关键字 - enum

enum Sex
{
    MALE,
    FEMALE,
    SECRET
};
//MALE,FEMALE,SECRET - 枚举常量
int main()
{
    enum Sex s = FEMALE;
    printf("%d\n",s);//1
    printf("%d\n",MALE);//0
    printf("%d\n",FEMALE);//1
    printf("%d\n",SECRET);//2
    return 0;
}