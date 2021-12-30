#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, R;
    char S[1000], P[1000];
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
        for (int j = 0; S[j] != '\0'; j++)
        {
            for (int k = 0; k < R; k++)
            {
                cout << P[(j * R) + k];
            }
        }
        for (int j = 0; P[j] != '\0'; j++)
        {
            P[j] = '\0';
        }
        cout << '\n';
    }
}