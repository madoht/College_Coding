union
{
    int i;
    float f;
    char str[20];
} data;

int main(void)
{
    printf("data.i : %d\n", data.i);
    printf("data.f : %f\n", data.f);
    printf("data.str : %s\n", data.str);
}