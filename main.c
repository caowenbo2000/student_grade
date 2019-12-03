#include "student.h"
#include "intal.h"
int main()
{
    inta();
    char op[100];
    while(~scanf("%s",op))
    {
        if(strcmp(op,"insert")==0) ST_insert();
        if(strcmp(op,"delete")==0) ST_delete();
        if(strcmp(op,"sort")==0) ST_sort();
        if(strcmp(op,"view")==0) ST_view();
        if(strcmp(op,"query")==0) ST_query();
        if(strcmp(op,"query_max")==0) ST_query_max();
    }
    return 0;
}
