#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, W, H, a;
    double size;
    cin >> N >> W >> H;

    size = pow(W, 2) + pow(H, 2);
    size = sqrt(size);

    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (((int)size - a) >= 0)
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO\n";
        }
    }
}