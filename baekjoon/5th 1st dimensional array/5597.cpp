#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool A[31] = {
        0,
    };
    int temp;
    for (int i = 0; i < 28; i++)
    {
        cin >> temp;
        A[temp] = true;
    }
    for (int i = 1; i <= 30; i++)
    {
        if (!A[i])
            cout << i << '\n';
    }
    return 0;
}