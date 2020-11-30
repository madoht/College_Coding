#include <stdio.h>
int main(void)
{
    FILE *fp;
    fp = fopen("test.txt", "w");
    if (fp)
    {
        fputc('a', fp);
        fputc('b', fp);
        fputc('c', fp);
        fclose(fp);
    }
    else
    {
        printf("Fail to open file\n");
    }
    return 0;
}