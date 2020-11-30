#include <stdio.h>
void do_save_exam_result(FILE *fp);
int main(void)
{
    FILE *fp;
    char fname[100];

    printf("Input file name to save: ");
    scanf("%s", fname);

    fp = fopen(fname, "wb");
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
    struct
    {
        int id;
        char name[20];
        double result;
    } info;

    while (1)
    {
        printf("Input exam result: ");
        scanf("%d", &info.id);
        if (info.id < 0)
            break;
        scanf("%s %lf", info.name, &info.result);
        fwrite(&info, sizeof(info), 1, fp);
    }
    return;
}
