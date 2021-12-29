#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, R;
    char S[20], P[161];
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> R >> S;
        for (int j = 0; S[j] != '\0'; j++)
        {
            for (int k = 0; k < R; k++)
            {
                P[(j * R) + k] = S[j];
            }
        }
        cout << P << '\n';
        for (int j = 0; P[j] != '\0'; j++)
        {
            P[j] = '\0';
        }
    }
}