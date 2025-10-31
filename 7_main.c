//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()
{
    int arr[5];
    int i;

    i = 0;
    while(i < 4)
    {
        scanf("%d",&arr[i]);
        i ++;
    }

    i = 4;
    while(i > 0)
    {
        arr[i] = arr[i - 1];
        i --;
    }

    arr[0] = 0;
    
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
