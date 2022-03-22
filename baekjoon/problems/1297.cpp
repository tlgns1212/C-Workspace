#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double D, H, W;
    int H1, W1;
    cin >> D >> H >> W;

    H1 = int(D / sqrt(H * H + W * W) * H);
    W1 = int(D / sqrt(H * H + W * W) * W);

    cout << H1 << ' ' << W1;
}