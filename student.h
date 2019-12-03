#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#define MAX 10000
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int num;
struct STUDENT
{
    char name[20];
    char id[20];
    char tele_num[20];
    int grade_a;
    int grade_b;
    double arv;
} student[MAX],tmp;

void ST_insert();
void ST_delete();
void ST_sort();
void ST_view();
void ST_query();
void ST_query_max();

#endif // STUDENT_H_INCLUDED
