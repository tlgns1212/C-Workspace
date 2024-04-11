#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, answer = 0;
    string word;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int words[30] = {0};
        cin >> word;
        char prevLetter = word[0];
        words[word[0] - 97]++;
        for (int i = 1; i < word.size(); i++)
        {
            if (words[word[i] - 97] != 0 && prevLetter != word[i])
            {
                answer--;
                break;
            }
            prevLetter = word[i];
            words[word[i] - 97]++;
        }
        answer++;
    }
    cout << answer;
    return 0;
}