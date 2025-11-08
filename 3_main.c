//202511716118
//1441913365@qq.com
//杨雨鑫

#include<stdio.h>
void reput(int arr[],int j)
{
    int temp;
    for(int i = 0;i < j/2;i ++)
    {
        temp = arr[i];
        arr[i] = arr[j - 1 - i];
        arr[j - 1 - i] = temp;
    }
} 

int main()
{
    int arr[5];
    for(int i = 0;i < 5;i ++)
    {
    scanf("%d",&arr[i]);
    }

reput(arr , 5);

for(int i = 0;i < 5;i ++)
{
    printf("%d",arr[i]);
    if (i < 4)
    {
        printf(" ");
    }
}

return 0;

}
