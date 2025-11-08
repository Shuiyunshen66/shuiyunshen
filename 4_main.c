//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int power(int a, int b)
{
    int result = 1;
    for(int i = 0;i < b ;i ++)
    {
        result *= a;
    }
    return result;
}

int main()
    {
        int c = 0;
        for(int i = 1;i <= 5;i ++)
        {
            c += power(i , 2);
        }

        printf("%d",c);

        return 0;
        
    }
