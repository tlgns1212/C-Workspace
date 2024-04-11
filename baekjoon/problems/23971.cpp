#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int H, W, N, M;
    cin >> H >> W >> N >> M;

    int Hor = (H - 1) / (N + 1) + 1;
    int Ver = (W - 1) / (M + 1) + 1;

    cout << Hor * Ver;
    return 0;
}