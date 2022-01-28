#include <iostream>
using namespace std;

// int Fibonachi(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     else if (n == 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return Fibonachi(n - 1) + Fibonachi(n - 2);
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int n;
//     cin >> n;
//     cout << Fibonachi(n);
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, arr[30] = {0, 1};
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[n];
}