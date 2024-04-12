
#include <iostream>
#include <algorithm>
using namespace std;

int N, answer;
pair<int, int> line[1000001];

bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        line[i] = {x, y};
    }
    sort(line, line + N, compare);

    int left = -1000000001, right = -1000000001;
    for (int i = 0; i < N; i++)
    {
        int start = line[i].first, end = line[i].second;
        if (right < start)
        {
            answer += right - left;
            left = start;
            right = end;
        }
        else
        {
            if (right < end)
            {
                right = end;
            }
        }
    }
    answer += right - left;
    cout << answer;

    return 0;
}
// 4
// 1 3
// 2 5
// 3 5
// 6 7

// 5