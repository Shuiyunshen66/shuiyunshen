//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
int count(int arr[],int j)
{
    int sum = 0;
    for (int i = 0;i < j;i ++)
    {
        sum += arr[i];
    }
    return sum;
}

int times(int arr[],int j)
{
    int product = 1;
    for(int i = 0;i < j;i ++)
    {
        product *= arr[i];
    }
    return product;
}

int main()
{
    int arr[5];
    for(int i = 0;i < 5;i ++)
    {
        scanf("%d",&arr[i]);
    }


int sum = count(arr,5);
int product = times(arr , 5);

printf("%d %d", sum, product);

return 0;

}
