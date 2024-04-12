#include <iostream>
using namespace std;

int N, answer, array[101][27];
string s;

void solution()
{
    for (int i = 1; i < N; i++)
    {
        int dif = 0, difIndex = -1;
        bool shouldGet = true;
        for (int j = 0; j < 27; j++)
        {
            if (array[0][j] != array[i][j])
            {
                dif++;
                if (difIndex == -1)
                    difIndex = j;
                if (dif == 2 && array[0][difIndex] != array[i][j])
                {
                    shouldGet = false;
                    break;
                }
                else if (dif >= 3)
                {
                    shouldGet = false;
                    break;
                }
            }
        }
        if (shouldGet)
            answer++;
    }
}

void input()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> s;
        for (char c : s)
        {
            array[i][c - 'A']++;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();

    cout << answer;
}

// 4
// DOG
// GOD
// GOOD
// DOLL

// 2