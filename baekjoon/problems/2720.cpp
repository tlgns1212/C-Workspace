#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int C, qua, dime, nick, penny;
        cin >> C;
        qua = C / 25;
        C = C % 25;
        dime = C / 10;
        C = C % 10;
        nick = C / 5;
        C = C % 5;
        penny = C / 1;
        C = C % 1;
        cout << qua << ' ' << dime << ' ' << nick << ' ' << penny << '\n';
    }
}