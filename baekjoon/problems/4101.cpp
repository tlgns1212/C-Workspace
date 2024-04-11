#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    while (1)
    {
        cin >> A >> B;
        if (A == B && A == 0)
            break;

        cout << (A > B ? "Yes" : "No") << '\n';
    }

    return 0;
}