#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, start, end, time, count = 0;
    vector<pair<int, int>> table;

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> start >> end;
        table.push_back(pair<int, int>(end, start)); // 끝나는 시간부터 넣어서, 나중에 정렬할 때 끝나는 시간 순으로 정렬하도록
    }
    sort(table.begin(), table.end());
    time = table[0].first;
    count++;
    for (int i = 1; i <= N; i++)
    {
        if (table[i].second >= time) // 다음 시작시간이 끝나는 시간과 같거나 더 크면
        {
            time = table[i].first;
            count++;
        }
    }
    cout << count;

    return 0;
}