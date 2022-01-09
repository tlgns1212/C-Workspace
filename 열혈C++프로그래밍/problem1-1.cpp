#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int sum = 0;
    for (int i = 1; i < +5; i++)
    {
        cout << i << '번째 정수 입력: ' << i;
        sum += i;
    }
    cout << '합계: ' << sum;
}