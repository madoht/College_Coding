#define aLength 8

void insertion_sort(int a[])
{
    int i, j, min;

    for (i = 1; i < aLength; i++)
    {
        min = a[i];
        j = i - 1;
        while (j >= 0 && min < a[j])
        {
            a[j + 1] = a[j];
            j--;
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
        }
        a[j + 1] = min;
    }
}

void main()
{
    int a[aLength] = {6, 5, 3, 1, 8, 7, 2, 4};

    insertion_sort(a);
}