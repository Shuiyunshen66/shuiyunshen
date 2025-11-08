//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int main()
{
    int arr[3][3];
    for(int i = 0;i < 3;i ++)
    {
        for(int j = 0;j < 3;j ++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < 3; i ++)
    {
        for(int j = 0;j < 3; j ++)
        {
            printf("%d",arr[j][i]);
            if(j < 2)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
