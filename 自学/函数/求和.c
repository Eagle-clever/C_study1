#include<stdio.h>

int Add(int x,int y)
{
    int z = x+y;
    return z;
}
int main()
{
    int a = 0;
    int b = 0; 
    int num1 = 100;
    int num2 = 200;
    scanf("%d%d",&a,&b);
    int c = a + b;
    int num3 = num1 + num2;
    int d = Add(a,b);
    printf("C = %d\n",c);
    printf("%d\n",num3);
    printf("%d\n",d);
    return 0;
}