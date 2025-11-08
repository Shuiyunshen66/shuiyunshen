//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int times(int a1,int an,int step)
{
    int n = (an - a1) / step + 1;
    int sum = n*(a1 + an) / 2;
    return sum;
}

int main()
{
    int result = times(1,100,1);

    printf("%d",result);

    return 0;
    
}
