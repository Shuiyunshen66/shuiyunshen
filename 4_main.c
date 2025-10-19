//202511716118
//1441913365@qq.com
//杨雨鑫
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;

printf("请输入三条边长，中间用空格隔开：");
scanf("%d %d %d", &a, &b, &c);

if (a + b > c && a + c> b && b + c > a)
{
    printf("可以组成三角形\n");
}
else
{
    printf("不能组成三角形\n");
}
 
return 0;

}
