#include <stdio.h>
int main(void)
{
    FILE *fp;
    int c;
    fp = fopen("test.txt", "r");
    if (fp)
    {
        while ((c = fgetc(fp)) != EOF)
        {
            putchar(c);
        }
        fclose(fp);
    }
    else
    {
        printf("Fail to open file\n");
    }
    return 0;
}