//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()
{
    int arr[10];
    for(int i = 0;i < 10;i ++)
    {
        scanf("%d",&arr[i]);
    }

    for(int i = 0;i < 9;i ++)
    {
        for(int j = 0;j < 9 - i;j ++)
        {
            if(arr[j] > arr[j + 1])
            {
                int a = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = a;
            }
        }
    }

    for(int i = 0; i < 10; i ++)
    {
        printf("%d",arr[i]);
        if(i < 9)
        {
            printf(" ");
        }
    }

    return 0;

}
