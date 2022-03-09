#include <iostream>
using namespace std;

int main()
{
    int day, month, year;

    while (1)
    {
        int answer = 0;
        cin >> day >> month >> year;
        if (((day == 0) && (month == 0)) && (year == 0))
        {
            break;
        }
        if (month > 1)
        {
            answer += ((month - 1) * 31);
        }
        answer += day;
        switch (month)
        {
        case 3:
        case 4:
            answer -= 3;
            break;
        case 5:
        case 6:
            answer -= 4;
            break;
        case 7:
        case 8:
        case 9:
            answer -= 5;
            break;
        case 10:
        case 11:
            answer -= 6;
            break;
        case 12:
            answer -= 7;
            break;
        }
        if ((month > 2) && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)))
        {
            answer += 1;
        }
        cout << answer << '\n';
    }
}