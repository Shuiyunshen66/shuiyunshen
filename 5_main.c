//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()

{
    int i = 0;
    int b = 0;
    int arr[5];

    printf("请输入四个整数：");

    i = 0;
    while(i < 4)
    {
        scanf("%d",&arr[i]);//读取前四位数据
        i ++;
    }


    i = 0;
    b = 0;
    while(i < 4)
    {
        b += arr[i];//计算
        i++;
    }
    arr[4] = b;

    i = 0;
    while(i < 5)
    {
        printf("%d",arr[i]);
        if (i < 4)
        {
            printf(" ");
        }
        i++;
    }

    printf("\n");

    return 0;
}
