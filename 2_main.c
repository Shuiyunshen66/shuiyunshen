//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()

{
    int num , a, b, c;
    int d = 0;  //计数水仙花数个数
    
    for (num = 100;num <= 999; num++)
    {
        a = num / 100;         //百位
        b = (num / 10) % 10;   //十位
        c = num % 10;          //个位

        if (num == a*a*a + b*b*b + c*c*c)
        {
            if (d > 0)
            {
                printf(" ");
            }
            printf("%d", num);
            d ++;
        }
    }

    printf("\n");
    return 0;

}
