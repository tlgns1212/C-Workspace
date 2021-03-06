#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char alpha[16];
    int dial = 0;
    cin >> alpha;
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        dial += (((int)alpha[i] - 59 - ((((int)alpha[i] == 83) || ((int)alpha[i] == 86) || ((int)alpha[i] == 89) || ((int)alpha[i] == 90)) ? 1 : 0)) / 3) + 1;
        if ((int)alpha[i] == 90)
        {
            dial -= 1;
        }
    }
    cout << dial;
}