#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x, y, w, h, max_x, max_y;
    cin >> x >> y >> w >> h;
    max_x = ((abs(x - w) <= abs(x)) ? (abs(x - w)) : (abs(x)));
    max_y = ((abs(y - h) <= abs(y)) ? (abs(y - h)) : (abs(y)));
    cout << ((max_x <= max_y) ? max_x : max_y);
}