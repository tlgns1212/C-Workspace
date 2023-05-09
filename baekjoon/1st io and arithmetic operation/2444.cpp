#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = -N + 1; i < N; i++)
    {
        for (int j = 0; j < abs(i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (N - abs(i)) * 2 - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}