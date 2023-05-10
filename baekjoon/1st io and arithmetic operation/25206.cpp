#include <iostream>
using namespace std;
int main()
{
    string name, grade;
    float num, gradeNum = 0, total = 0, totalGradeNum = 0;
    for (int i = 0; i < 20; i++)
    {
        cin >> name >> num >> grade;
        if (grade[0] == 'A')
            gradeNum += 4;
        if (grade[0] == 'B')
            gradeNum += 3;
        if (grade[0] == 'C')
            gradeNum += 2;
        if (grade[0] == 'D')
            gradeNum += 1;
        if (grade.length() > 1 && grade[1] == '+')
            gradeNum += 0.5;
        if (grade[0] == 'P')
        {
            continue;
        }
        total += gradeNum * num;
        totalGradeNum += num;
        gradeNum = 0;
    }
    cout << total / totalGradeNum;
}