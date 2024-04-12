#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unsigned int K, N, biggest = 0;
    cin >> K >> N;
    vector<unsigned int> v(K);
    for (int i = 0; i < K; i++)
    {
        cin >> v[i];
        if (biggest < v[i])
            biggest = v[i];
    }
    long long left = 1, right = biggest, answer = 0;
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        long long sum = 0;
        for (int i = 0; i < K; i++)
        {
            sum += (v[i] / mid);
        }
        if (sum >= N)
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