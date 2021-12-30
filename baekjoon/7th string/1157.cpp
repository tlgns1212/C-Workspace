#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int alpha[26] = {0}, length = 0, max = 0;
    char word[1000001], answer;

    cin >> word;
    for (; word[length] != '\0'; length++)
    {
        alpha[(int)toupper(word[length]) - 65]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (max == alpha[i])
        {
            answer = '?';
        }
        else if (max < alpha[i])
        {
            max = alpha[i];
            answer = (char)(i + 65);
        }
    }
    cout << answer;
}