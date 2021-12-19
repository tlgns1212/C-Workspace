#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, answer = 0, score = 0;
    string A;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> A;
        for (int j = 0; j < A.length(); j++)
        {
            if (A[j] == 'O')
            {
                answer += ++score;
            }
            else
            {
                score = 0;
            }
        }
        cout << answer << '\n';
        answer = 0;
        score = 0;
    }
}