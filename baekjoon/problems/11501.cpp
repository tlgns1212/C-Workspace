#include <iostream>
#include <vector>
using namespace std;

int T, N;
vector<int> v;

void solution()
{
    long long answer = 0;
    int max = v.back();
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] >= max)
            max = v[i];
        else
        {
            answer += max - v[i];
        }
    }
    cout << answer << '\n';
}

void input()
{
    cin >> T;
    while (T--)
    {
        cin >> N;
        v.clear();
        for (int i = 0; i < N; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        solution();
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();

    return 0;
}
