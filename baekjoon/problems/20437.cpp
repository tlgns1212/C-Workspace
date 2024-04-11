#include <iostream>
using namespace std;

int alphaMin[27];
int alphaMax[27];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, K;
    string W;
    cin >> T;
    while (T--)
    {
        cin >> W >> K;
        for (int i : alphaMin)
            i = 99999999;

        int left = 0, right = 0, cntMin = 9999999, cntMax = 0;
    }

    return 0;
}