#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string name, grade;
    int total = 0;
    float count, result = 0;

    for (int i = 0; i < 20; i++)
    {
        cin >> name >> count >> grade;
        float gradeNum = 0;
        if (grade == "A+")
            gradeNum = 4.5;
        else if (grade == "A0")
            gradeNum = 4.0;
        else if (grade == "B+")
            gradeNum = 3.5;
        else if (grade == "B0")
            gradeNum = 3.0;
        else if (grade == "C+")
            gradeNum = 2.5;
        else if (grade == "C0")
            gradeNum = 2.0;
        else if (grade == "D+")
            gradeNum = 1.5;
        else if (grade == "D0")
            gradeNum = 1.0;
        else if (grade == "F")
            gradeNum = 0;
        else
        {
            total -= (int)count;
        }
        total += (int)count;
        result += gradeNum * count;
    }
    cout << result / total;

    return 0;
}