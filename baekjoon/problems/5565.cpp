#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int total, book;
    cin >> total;
    for (int i = 0; i < 9; i++)
    {
        cin >> book;
        total -= book;
    }
    cout << total;

    return 0;
}