#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, start = 1;
    long long answer = 0;
    vector<int> ranks;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        ranks.push_back(temp);
    }
    sort(ranks.begin(), ranks.end());

    for (int rank : ranks)
    {
        answer += abs(start++ - rank);
    }
    cout << answer;

    return 0;
}