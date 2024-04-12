#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, answer = 1;
    vector<int> x;

    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }

    return 0;
}