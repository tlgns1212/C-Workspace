#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, M, maxI = 0, answer;
    cin >> N >> M;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
        if (maxI < v[i])
            maxI = v[i];
    }
    int left = 0;
    int right = maxI;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        long long int sum = 0;
        for (int i = 0; i < N; i++)
        {
            if (mid < v[i])
                sum += v[i] - mid;
        }
        if (sum >= M)
        {
            answer = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << answer;

    return 0;
}