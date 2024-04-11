#include <iostream>
using namespace std;

struct people
{
    int weight;
    int height;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, rank = 1;
    people P[50];

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int w, h;
        cin >> w >> h;
        P[i].weight = w;
        P[i].height = h;
    }
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (P[i].weight < P[j].weight && P[i].height < P[j].height)
                rank++;
        }
        cout << rank << ' ';
        rank = 1;
    }
}