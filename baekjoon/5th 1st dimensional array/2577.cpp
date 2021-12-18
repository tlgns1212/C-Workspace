#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int A, B, C, D, a[10] = {0};
    cin >> A >> B >> C;
    D = A * B * C;

    while (D)
    {
        a[D % 10] += 1;
        D /= 10;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << endl;
    }
}
