#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int T, N, peoples[1001];
vector<int> successed;
map<int, int> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--)
    {
        cin >> N;
        for (int i = 0; i < N; i++)
        {
            cin >> peoples[i];
            m[peoples[i]]++;
        }

        for (auto iter = m.begin(); iter != m.end(); iter++)
        {
            if (iter->second >= 4)
            {
                successed.push_back(iter->first);
            }
        }
        m.clear();
        int score = 1;
        for (int i : peoples)
        {
            if (find(successed.begin(), successed.end(), i) != successed.end())
            {
                m[i] += score++;
            }
        }
    }

    return 0;
}