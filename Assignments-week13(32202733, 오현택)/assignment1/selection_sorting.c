#define aLength 5

void selection_sort(int a[])
{
    int i, j, temp;
    for (i = 0; i < aLength - 1; i++)
    {
        for (int m = 0; m < aLength; m++)
        {
            if (m == aLength - 1)
            {
                printf("%d\n", a[m]);
            }
            else
            {
                printf("%d ", a[m]);
            }
        }
        int jMin = i;
        for (j = i + 1; j < aLength; j++)
        {
            if (a[j] < a[jMin])
            {
                jMin = j;
            }
        }
        if (jMin != i)
        {
            temp = a[i];
            a[i] = a[jMin];
            a[jMin] = temp;
        }
    }
}

void main()
{
    int a[aLength] = {25, 11, 12, 22, 64};

    selection_sort(a);
}