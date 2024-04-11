#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, v, cute = 0;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> v;
        cute += (v == 1 ? 1 : -1);
    }
    cout << (cute >= 0 ? "Junhee is cute!" : "Junhee is not cute!");

    return 0;
}