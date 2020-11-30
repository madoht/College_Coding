#include <stdio.h>

int main(void)
{
    FILE *fp, *ft;
    char buff[100];
    fp = fopen("name.txt", "r");
    if (fp)
    {
        while (fgets(buff, 100, fp) != NULL)
        {
            printf("%s", buff);
        }
        fclose(fp);
    }
    else
    {
        printf("Fail to open file\n");
    }
    return 0;
}