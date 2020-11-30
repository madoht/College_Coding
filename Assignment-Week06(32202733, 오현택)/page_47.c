struct pos
{
    int x, y;
};
struct pos movePos(struct pos p)
{
    p.x += 10;
    p.y += 10;
    return p;
}

int main(void)
{
    struct pos p = {10, 20};
    struct pos pm;
    pm = movePos(p);
    printf("%d %d\n", pm.x, pm.y);
}