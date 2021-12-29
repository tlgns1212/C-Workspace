#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char S[101];
    int alpha[26];

    for (int i = 0; i < 26; i++)
    {
        alpha[i] = -1;
    }

    cin >> S;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (alpha[S[i] - 97] == -1)
        {
            alpha[S[i] - 97] = i;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        cout << alpha[i] << ' ';
    }
}