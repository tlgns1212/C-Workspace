#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    string N;
    int B, num, total = 0;
    cin >> N >> B;
    num = B;

    for (int i = 0; i < N.length(); i++)
    {
        total += (isalpha(N[i]) ? N[i] - 'A' + 10 : N[i] - '0') * pow(B, N.length() - 1 - i);
    }
    cout << total;
    return 0;
}