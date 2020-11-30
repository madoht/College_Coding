#include <stdio.h>
void do_save_exam_result(FILE *fp);
int main(void)
{
    FILE *fp;
    char fname[100];
    printf("Input file name to save: ");
    scanf("%s", fname);
    fp = fopen(fname, "w");
    if (fp)
    {
        do_save_exam_result(fp);
    }
    else
    {
        printf("Fail to open file\n");
    }
    return 0;
}

void do_save_exam_result(FILE *fp)
{
    char name[20];
    int id;
    double result;
    while (1)
    {
        printf("Input exam result: ");
        scanf("%d", &id);
        if (id < 0)
            break;
        scanf("%s %lf", name, &result);
        fprintf(fp, "%d %s %lf ", id, name, result);
    }
    return;
}