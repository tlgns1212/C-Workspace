#include <iostream>
using namespace std;

int main()
{
    int a, b, answer = 0;
    cin >> a >> b;

    a--, b--;
    int aD = a / 4, bD = b / 4;
    int aM = a % 4, bM = b % 4;

    answer = abs(aD - bD) + abs(aM - bM);

    cout << answer;

    return 0;
}