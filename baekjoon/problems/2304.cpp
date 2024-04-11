#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, biggest, biggestPos, graph[1001], answer;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int L, H;
    cin >> N;
    while (N--)
    {
        cin >> L >> H;
        graph[L] = H;
        if (H > biggest)
        {
            biggest = H;
            biggestPos = L;
        }
    }

    int LH = 0;
    for (int i = 0; i < biggestPos; i++)
    {
        if (graph[i] > LH)
            LH = graph[i];
        answer += LH;
    }
    int RH = 0;
    for (int i = 1000; i > biggestPos; i--)
    {
        if (graph[i] > RH)
            RH = graph[i];
        answer += RH;
    }
    answer += biggest;

    cout << answer;
    return 0;
}

// 7
// 2 4
// 11 4
// 15 8
// 4 6
// 5 3
// 8 10
// 13 6

// 98