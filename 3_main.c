//202511716118
//1441913365@qq.com
//杨雨鑫
#include<stdio.h>

int main()
{
    int a;
    int b;
    int c;

 printf("请依次输入两个整数和运算符号，中间用空格隔开：");
 scanf("%d %d %c", &a, &b, &c);

 if (c == '+')
 {
    printf("%d\n", a + b);
 }
 else if(c == '-')
 {
    printf("%d\n", a - b);
 }
 else if(c == '*')
 {
    printf("%d\n", a * b);
 }
 else if(c == '/')
 {
    if(b == 0)
    {
        printf("请检查输入数据，除数不能为0\n");
    }
    else
    {
        printf("%.2f\n", (float)a / (float)b);
    }
 }

 return 0;

}
