#include <stdio.h>
int main()
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    // if (minute < 45)
    // {
    //     if (hour < 1)
    //     {
    //         hour = 24;
    //     }
    //     hour -= 1;
    //     minute += 15;
    // }
    // else
    // {
    //     minute -= 45;
    // }
    // printf("%d %d", hour, minute);
    printf("%d %d", (hour - (minute < 45) + 24) % 24, (minute - 45 + 60) % 60);
}