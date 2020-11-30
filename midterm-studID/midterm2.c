/*
** Midterm exam #2
** Name : HyunTaek Oh
** Student ID : 32202733
*/

struct point
{
    int x, y;
};

int area(int *a, int *b)
{
    int areas;
    areas = (*a.x - *b.x) * (*a.y - *b.y);
    return areas
}

int round(int *a, int *b)
{
    int rounds;
    rounds = (*a.x + *b.x + *a.y + *b.y) * 2;
    return rounds;
}

int main(void)
{
    struct point list[2] = {
        {x1, y1},
        {x2, y2}};

    for (int i = 0; i < 2; i++)
    {
        scanf("%lf", &list[i].x);
        scanf("%lf", &list[i].y);
    }
    square(&list[0], &list[1]);
    round(&list[0], &list[1]);
    printf("area = %d", areas);
    printf("perimeter = %d", rounds);
    return 0;
}
