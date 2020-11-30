struct pos
{
    int x, y;
};

int main(void)
{
    struct pos ps = {100, 200};
    struct pos *ptr;

    ptr = &ps;
    printf("%d %d\n", (*ptr).x, (*ptr).y);
}