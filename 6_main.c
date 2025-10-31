//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()
{
    int a;
    int i = 0;
    int arr[5];

    printf("请输入数字，并用回车分隔：");

    while(i < 5 )
    {
        scanf("%d",&a) == 1; 
        
        if (a % 2 == 0)
        {
            arr[i] = a;
            i ++;
        }
    }

    i = 0;
    while(i < 5)
    {
        printf("%d",arr[i]);
        if(i < 4)
        {
            printf(" ");
        }
        i ++;
    }

    printf("\n");

    return 0;

}
