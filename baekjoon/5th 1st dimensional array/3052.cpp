#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, arr[42] = {0}, answer = 0;

    for (int i = 0; i < 10; i++)
    {
        cin >> A;
        arr[A % 42] = 1;
    }
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        answer += arr[i];
    }
    cout << answer;
}