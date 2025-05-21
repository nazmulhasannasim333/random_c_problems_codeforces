#include <stdio.h>

int main()
{
    int d1, m1, y1;
    int d2, m2, y2;
    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);

    int day, month, year;

    if (d2 < d1)
    {
        d2 += 30;
        m2 -= 1;
    }
    day = d2 - d1;

    if (m2 < m1)
    {
        m2 += 12;
        y2 -= 1;
    }
    month = m2 - m1;

    year = y2 - y1;

    printf("%d %s %d %s %d %s\n",
           day, (day <= 1) ? "Day" : "Days",
           month, (month <= 1) ? "Month" : "Months",
           year, (year <= 1) ? "Year" : "Years");

    return 0;
}