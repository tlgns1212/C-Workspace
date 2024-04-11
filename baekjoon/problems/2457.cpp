
#include <iostream>
#include <tuple>
#include <vector>
using namespace std;

int N;
vector<tuple<int, int, int, int>> flowers;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int fM, fD, sM, sD;
        cin >> fM >> fD >> sM >> sD;
        flowers.push_back({fM, fD, sM, sD});
    }

    return 0;
}

// 4
// 1 1 5 31
// 1 1 6 30
// 5 15 8 31
// 6 10 12 10

// 2