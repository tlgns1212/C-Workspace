#include <iostream>
#include <vector>
using namespace std;

int N, minPrice, usedGas = 0;
vector<int> dist;
vector<int> price;

void input()
{
    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        int temp;
        cin >> temp;
        dist.push_back(temp);
    }
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        price.push_back(temp);
    }
}

int solution()
{
    int answer = 0;
    minPrice = price[0];
    for (int i = 0; i < N - 1; i++)
    {
        if (price[i] < minPrice)
        {
            answer += minPrice * usedGas;
            minPrice = price[i];
            usedGas = 0;
        }
        else
        {
            usedGas += dist[i];
        }
    }
    answer += minPrice * usedGas;
    return answer;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    cout << solution();

    return 0;
}