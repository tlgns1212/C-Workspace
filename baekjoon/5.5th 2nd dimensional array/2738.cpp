#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> v;
    vector<vector<int>> vv1, vv2;
    int N, M, temp;

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        vv1.push_back(v);
        v.clear();
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> temp;
            cout << vv1[i][j] + temp << ' ';
        }
        cout << '\n';
    }

    return 0;
}