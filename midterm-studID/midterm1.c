/*
** Midterm exam #1
** Name : HyunTaek Oh 
** Student ID : 32202733
*/

#include <stdio.h>

void swap(char *s1, char *s2);

int main()
{
    char s1, s2;
    s1 = "BTS is a boy-group.";
    s2 = "TWICE is a girl-group.";
    swap(&s1, &s2);
    printf("%c\n, %c", s1, s2);

    return 0;
}

void swap(char *s1, char *s2)
{
    char temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}