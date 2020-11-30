enum days
{
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
};
char *day_names[] = {
    "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int main(void)
{
    enum days toDay = MON;
    printf("Today is %s\n", day_names[toDay]);
}