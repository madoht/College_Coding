struct pos
{
    int x, y;
};
int main(void)
{
    struct pos p[3] = {
        {10, 20},
        {100, 200},
        {1000, 2000}};
    struct pos *ptr = p;
    for (int i = 0; i < 3; i++)
    {
        printf("%d %d\n", ptr->x, ptr->y);
        ptr++;
    }
}