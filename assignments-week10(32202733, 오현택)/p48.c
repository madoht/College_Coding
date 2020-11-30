#include <stdio.h>
#include <stdlib.h>
void clone_lenna(FILE *fp, FILE *ft);
int main(void)
{
    FILE *fp, *ft;
    fp = fopen("lenna.png", "rb");
    ft = fopen("lenna_copy.png", "wb");
    if (fp && ft)
    {
        clone_lenna(fp, ft);
        fclose(fp);
        fclose(ft);
    }
    else
    {
        printf("Fail to open file\n");
    }
    return 0;
}

void clone_lenna(FILE *fp, FILE *ft)
{
    unsigned char buff[100];
    size_t readb, writeb;
    while ((readb = fread(buff, sizeof(unsigned char), 100, fp)) > 0)
    {
        writeb = fwrite(buff, sizeof(unsigned char), readb, ft);
        if (writeb < 0)
        {
            printf("Error %lu\n", writeb);
            exit(0);
        }
        if (writeb != readb)
        {
            printf("Error %lu\n", writeb);
            exit(0);
        }
    }
}