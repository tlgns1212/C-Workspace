#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x[3], y[3], temp_x = 0, temp_y = 0, xad, yad;
    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    if (x[0] == x[1])
        temp_x = x[2];
    else if (x[0] == x[2])
        temp_x = x[1];
    else
        temp_x = x[0];
    if (y[0] == y[1])
        temp_y = y[2];
    else if (y[0] == y[2])
        temp_y = y[1];
    else
        temp_y = y[0];
    cout << temp_x << " " << temp_y;
}