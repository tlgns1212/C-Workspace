#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a[3];
    while (1)
    {
        for (int i = 0; i < 3; i++)
            cin >> a[i];

        if (a[0] == 0 && a[1] == 0 && a[2] == 0)
            break;

        sort(a, a + 2);
        if (a[0] + a[1] <= a[2])
            cout << "Invalid" << '\n';
        else if (a[0] == a[1] && a[0] == a[2])
            cout << "Equilateral" << '\n';
        else if (a[0] == a[1] || a[0] == a[2] || a[1] == a[2])
            cout << "Isosceles" << '\n';
        else
            cout << "Scalene" << '\n';
    }

    return 0;
}