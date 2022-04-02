#include <iostream>
using namespace std;

int main()
{
    int n, finger[8] = {4, 3, 2, 1, 2, 3, 4, 5};

    cin >> n;
    if (n < 6)
    {
        cout << n;
    }
    else
    {
        n -= 6;
        n %= 8;
        cout << finger[n];
    }
}