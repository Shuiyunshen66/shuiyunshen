//202511716118
//1441913365@qq.com
//杨雨鑫
#include<stdio.h>

int main()
{
    int score;
    printf("请输入学生成绩:（0-100）：");
    scanf("%d",&score);
    if (score < 0  || score > 100)
    {
        printf("输入数据无效，应在0-100之间\n");
        return 0;
    }
    if (score >= 90)
    {
        printf("该学生成绩等级为：A\n");
    } 
    else if(score >= 80)
    {
        printf("该学生成绩等级为：B\n");
    }
    else if(score >= 70)
    {
        printf("该学生成绩等级为：C\n");
    }
    else if(score >= 60)
    {
        printf("该学生成绩等级为：D\n");
    }
    else
    {
        printf("该学生成绩等级为：E\n");
    }

    return 0;

}
