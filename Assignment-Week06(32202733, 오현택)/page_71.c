struct Data
{
    int i;
    float f;
    char str[20];
} data;
union UData
{
    int i;
    float f;
    char str[20];
} udata;

int main(void)
{
    printf("%p\n", &data.i);
    printf("%p\n", &data.f);
    printf("%p\n", &data.str);
    printf("%p\n", &udata.i);
    printf("%p\n", &udata.f);
    printf("%p\n", &udata.str);
}