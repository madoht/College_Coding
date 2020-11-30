struct pos
{
    int x, y;
};

void movePos(struct pos *ptr)
{
    ptr->x += 10;
    ptr->y += 10;
    return;
}

int main(void)
{
    struct pos p =
        {
            10, 20};
    movePos(&p);
    printf("%d %d\n", p.x, p.y);
}