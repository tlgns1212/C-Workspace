#include <iostream>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, v, temp;
    map<int, int> m;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        m[temp]++;
    }
    cin >> v;
    cout << m[v];

    return 0;
}