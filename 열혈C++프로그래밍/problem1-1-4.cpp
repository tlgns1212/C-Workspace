#include <iostream>
using namespace std;

int main()
{
    int sold, basic_salary = 50;
    while (1)
    {
        cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
        cin >> sold;
        if (sold == -1)
        {
            cout << "프로그램을 종료합니다.";
            break;
        }
        cout << "이번 달 급여: " << (basic_salary + (sold * 0.12)) << "만원" << '\n';
    }
}