//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()
{
    int a;
    int prime = 1;//若是质数，则prime输出为1
    int i = 2;

    printf("请输入密钥：");
    scanf("%d",&a);

    if (a <= 0 || a >= 50)
    {
        printf("输入无效，请输入小于50的正整数\n");
        return 0;
    }

    if (a == 1)
    {
        prime = 0 ;
    }
    else
    {
        while(i < a)
        {
            if(a % i == 0)
            {
                prime = 0;
                break;
            }
            i ++;
        }
    }
    if (prime)
    {
        printf("密钥安全，密码设置成功\n");
    }
    else 
    {
        printf("密钥不安全，请重新输入\n");
    }

    return 0;

}
