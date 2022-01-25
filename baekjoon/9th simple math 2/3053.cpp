#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int R;
    cin >> R;
    cout << fixed;
    cout.precision(6);
    cout << (double)R * R * M_PI << '\n'
         << (double)2 * R * R;
}