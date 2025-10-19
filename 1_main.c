//202511716118
//1441913365@qq.com
//杨雨鑫
#include <stdio.h>

int main()
{
    float a = 0.0;
    printf("请输入摄氏温度:");
    scanf("%f",&a);
    float b = a * (9.0f / 5.0f) +32.0f;
    printf("华氏温度为：%.1f\n",b);

    return 0;
    
}
