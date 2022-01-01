#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;
    char alpha[1000];
    cin >> alpha;
    for (int i = 0; alpha[i] != '\0'; i++)
    {
        if (alpha[i] == 'c')
        {
            if (alpha[i + 1] == '=')
                count--;
            else if (alpha[i + 1] == '-')
                count--;
        }
        else if (alpha[i] == 'd')
        {
            if (alpha[i + 1] == 'z')
            {
                if (alpha[i + 2] == '=')
                    count--;
            }
            else if (alpha[i + 1] == '-')
                count--;
        }
        else if (alpha[i] == 'l')
        {
            if (alpha[i + 1] == 'j')
                count--;
        }
        else if (alpha[i] == 'n')
        {
            if (alpha[i + 1] == 'j')
                count--;
        }
        else if (alpha[i] == 's')
        {
            if (alpha[i + 1] == '=')
                count--;
        }
        else if (alpha[i] == 'z')
        {
            if (alpha[i + 1] == '=')
                count--;
        }
        count++;
    }
    cout << count;
}