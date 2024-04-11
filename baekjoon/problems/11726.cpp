#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> V(n + 1, 0);
    V[0] = 1;
    V[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        V[i] = (V[i - 1] + V[i - 2]) % 10007;
    }
    cout << V[n];
}