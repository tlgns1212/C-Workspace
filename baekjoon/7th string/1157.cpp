#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string word;
    int letter[27] = {0,};
    int maxCount = 0, maxIndex = 0;
    cin >> word;

    for (char c : word)
    {
        if (++letter[toupper(c) - 'A'] > maxCount)
        {
            maxCount = letter[toupper(c) - 'A'];
            maxIndex = toupper(c) - 'A';
        }
    }

    int sameTotal = 0;
    for (int i : letter)
    {
        if (i == maxCount)
            sameTotal++;
    }
    if (sameTotal > 1)
        cout << "?";
    else
        cout << char(maxIndex + 'A');

    return 0;
}