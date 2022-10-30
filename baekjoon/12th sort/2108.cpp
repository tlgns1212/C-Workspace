#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    int vcnt[8001] = {
        0,
    };
    int N, temp, temp2, cnt = -4001, most = -4001, mean = 0;
    bool notfirst = false;

    cin >> N;
    v.reserve(N);
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        v.push_back(temp);
        vcnt[temp + 4000]++;
        mean += temp;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < 8001; i++)
    {
        if (vcnt[i] == cnt)
        {
            if (notfirst)
            {
                most = i - 4000;
                notfirst = false;
            }
        }
        else if (vcnt[i] > cnt)
        {
            cnt = vcnt[i];
            most = i - 4000;
            notfirst = true;
        }
    }
    cout << ((round((float)mean / N)) == -0 ? 0 : (round((float)mean / N))) << '\n';
    cout << v[N / 2] << '\n';
    cout << most << '\n';
    cout << v.back() - v.front();

    return 0;
}