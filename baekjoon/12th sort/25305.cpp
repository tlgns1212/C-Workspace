#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, k, temp;
    cin >> N >> k;
    vector<int> x(N, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end(), greater<int>());
    cout << x[k - 1];
    return 0;
}