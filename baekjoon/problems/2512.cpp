#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M, sum = 0, limit = 0;
vector<int> v;

void input()
{
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
        sum += temp;
    }
    cin >> M;
}

int solution()
{
    sort(v.begin(), v.end());
    if (sum <= M)
        return v[N - 1];

    int start = 0, end = v[N - 1], result;
    while (start <= end)
    {
        sum = 0;
        int mid = (start + end) / 2;
        for (int i = 0; i < N; i++)
        {
            sum += min(v[i], mid);
        }
        if (sum > M)
        { // 총 예상보다 더 많으면
            end = mid - 1;
        }
        else
        { // 총 예산을 만족하면
            start = mid + 1;
            result = mid;
        }
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    cout << solution();
    return 0;
}