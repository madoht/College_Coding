#include <stdio.h>
int main(void)
{
    FILE *fp, *ft;
    char *name = "My name is HyunTaek Oh";
    char *company = "Dankook university";
    fp = fopen("name.txt", "w");
    if (fp)
    {
        fputs(name, fp);
        fputs(company, fp);
        fclose(fp);
    }
    else
    {
        printf("Fail to open file\n");
    }
    return 0;
}