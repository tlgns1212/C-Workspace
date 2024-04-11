#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int H, W, answer;
vector<int> graph;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> H >> W;
    for (int i = 0; i < W; i++)
    {
        int temp;
        cin >> temp;
        graph.push_back(temp);
    }
    for (int i = 1; i < W - 1; i++)
    {
        int biggest = 0, smallest = 0;
        for (int j = i - 1; j >= 0; j--)
        {
            if (smallest < graph[j])
                smallest = graph[j];
        }
        for (int j = i + 1; j < W; j++)
        {
            if (biggest < graph[j])
                biggest = graph[j];
        }
        int num = min(smallest, biggest);
        if (num > graph[i])
            answer += num - graph[i];
    }
    cout << answer;

    return 0;
}
