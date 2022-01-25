#include <iostream>
using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int a, b, c;
//     while (1)
//     {
//         cin >> a >> b >> c;
//         if ((a == 0 && b == 0) && c == 0)
//         {
//             break;
//         }
//         a *= a;
//         b *= b;
//         c *= c;
//         cout << ((a + b == c) ? "right" : ((a + c == b) ? "right" : ((b + c == a) ? "right" : "wrong"))) << endl;
//     }
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, c;
    while (1)
    {
        cin >> a >> b >> c;
        if (a == 0)
            break;
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a))
        {
            cout << "right" << endl;
        }
        else
        {
            cout << "wrong" << endl;
        }
    }
}