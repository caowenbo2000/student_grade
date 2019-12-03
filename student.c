#include "student.h"
void ST_insert()
{
    num++;
    scanf("%s %s %s %d %d",&student[num].name,&student[num].id,&student[num].tele_num,&student[num].grade_a,&student[num].grade_b);
    student[num].arv=(student[num].grade_a+student[num].grade_b)/2.0;
    //printf("%d\n",num);
}
void ST_delete()
{
    char temp[100];
    scanf("%s",temp);
    int flag=0;
    for(int i=1;i<=num;i++)
    {
        if(flag==1) student[i-1]=student[i];
        if(strcmp(student[i].id,temp)==0) flag=1;
    }
    if(flag==1) num--;
}
void ST_sort()
{
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<num;j++)
        {
            if(student[j].arv<student[j+1].arv)
            {
                //STUDENT temp;
                tmp=student[j];
                student[j]=student[j+1];
                student[j+1]=tmp;
            }
        }
    }
}
void ST_view()
{
    for(int i=1;i<=num;i++)
    {
        printf("%s %s %s %d %d\n",student[i].name,student[i].id,student[i].tele_num,student[i].grade_a,student[i].grade_b);
    }
}
void ST_query()
{
    char temp[100];
    scanf("%s",temp);
    for(int i=1;i<=num;i++)
    {
        if(strcmp(temp,student[i].id)==0)
        {
            printf("%s %s %s %d %d\n",student[i].name,student[i].id,student[i].tele_num,student[i].grade_a,student[i].grade_b);
            break;
        }
    }
}
void ST_query_max()
{
    int max_a=0,max_b=0;
    for(int i=1;i<=num;i++)
    {
        if(student[i].grade_a>max_a) max_a=student[i].grade_a;
        if(student[i].grade_b>max_b) max_a=student[i].grade_b;
    }
    printf("max_a:%d\nmax_b:%d\n",max_a,max_b);
}
