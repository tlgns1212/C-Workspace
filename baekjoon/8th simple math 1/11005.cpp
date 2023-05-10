#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s;
    int N, B;

    cin >> N >> B;
    while (N > 0)
    {
        s.push_back((N % B < 10) ? N % B + '0' : N % B + 'A' - 10);
        N /= B;
    }
    reverse(s.begin(), s.end());
    cout << s;
    return 0;
}