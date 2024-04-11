#include <iostream>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N, temp, first, second;
    deque<pair<int, int>> dBalloon;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        dBalloon.push_back(make_pair(temp, i + 1));
    }

    while (!dBalloon.empty())
    {
        first = dBalloon.front().first;
        second = dBalloon.front().second;
        dBalloon.pop_front();
        if (first >= 0)
        {
            for (int i = 0; i < first - 1; i++)
            {
                dBalloon.push_back(dBalloon.front());
                dBalloon.pop_front();
            }
        }
        else
        {
            for (int i = 0; i < -first; i++)
            {
                dBalloon.push_front(dBalloon.back());
                dBalloon.pop_back();
            }
        }
        cout << second << ' ';
    }

    return 0;
}