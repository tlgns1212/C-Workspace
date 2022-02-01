#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, a;
    cin >> N;
    int *list = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> list[i];
    }
    sort(list, list + N);
    for (int i = 0; i < N; i++)
    {
        cout << list[i] << '\n';
    }
}