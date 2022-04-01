#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, d, n, s, p;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int par, ser;
        cin >> d >> n >> s >> p;
        par = d + (n * p);
        ser = n * s;
        if (par < ser)
        {
            cout << "parallelize\n";
        }
        else if (par == ser)
        {
            cout << "does not matter\n";
        }
        else
        {
            cout << "do not parallelize\n";
        }
    }
}