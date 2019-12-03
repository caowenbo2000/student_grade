#ifndef INTAL_H_INCLUDED
#define INTAL_H_INCLUDED

void inta()
{
    num=0;
    printf("****************************************************************\n");
    printf("输入格式为:\n");
    printf("添    加：insert 姓名 学号 电话 a课程成绩 b课程成绩\n");
    printf("删    除：delete 学号\n");
    printf("排    序: sort\n");
    printf("查看全部：view\n");
    printf("查询学生：query 学号\n");
    printf("查询最高分：query_max\n");
    printf("****************************************************************\n");
    return ;
}

#endif // INTAL_H_INCLUDED
