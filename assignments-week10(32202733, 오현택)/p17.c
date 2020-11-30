#include <stdio.h>
int main(void)
{
    FILE *fp, *ft;
    int c;
    fp = fopen("test.txt", "r");
    ft = fopen("test_copy.txt", "w");
    if (fp && ft)
    {
        while ((c = fgetc(fp)) != EOF)
        {
            fputc(c, ft);
        }
        fclose(fp);
        fclose(ft);
    }
    else
    {
        printf("Fail to open file\n");
    }
    return 0;
}