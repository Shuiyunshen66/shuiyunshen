//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()
{
    int num , a, b, c;
    int d = 0;  //计数水仙花数个数
    printf("");

    num = 100;
    while (num >= 100 && num <= 999)
    {
        a = num / 100;
        b = (num / 10) % 10;
        c = num % 10;

        if (num == a*a*a + b*b*b + c*c*c)
        {

            if (d > 0)
            {
                printf(" ");
            }
            printf("%d ", num);
            d ++;
        }

        num ++;

    }

    return 0;

}
