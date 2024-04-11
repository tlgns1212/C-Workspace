#include <iostream>
using namespace std;

int N, E, V1, V2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> E;
    for (int i = 0; i < E; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
    }

    cin >> V1 >> V2;

    return 0;
}

// 4 6
// 1 2 3
// 2 3 3
// 3 4 1
// 1 3 5
// 2 4 5
// 1 4 4
// 2 3

// 7