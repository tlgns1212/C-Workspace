#include <iostream>
#include <vector>
using namespace std;

int N;
vector<int> line(11);
vector<int> answer(11);

void solution()
{
    for (int i = 0; i < N; i++)
    {
        int totalMove = line[i];
        int move = 0;
        for (int j = 0; j < N; j++)
        {
            if (answer[j] == 0)
            {
                if (move++ == totalMove)
                {
                    answer[j] = i + 1;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << answer[i] << ' ';
    }
}

void input()
{
    int temp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> line[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();

    return 0;
}