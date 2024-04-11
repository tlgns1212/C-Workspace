#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int T, N, answer;
vector<pair<int, int>> interns;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--)
    {
        cin >> N;
        interns.clear();
        answer = 0;
        for (int i = 0; i < N; i++)
        {
            int test1, test2;
            cin >> test1 >> test2;
            interns.push_back({test1, test2});
        }
        sort(interns.begin(), interns.end());
    }

    return 0;
}

// 2
// 5
// 3 2
// 1 4
// 4 1
// 2 3
// 5 5
// 7
// 3 6
// 7 3
// 4 2
// 1 4
// 5 7
// 2 5
// 6 1

// 4
// 3