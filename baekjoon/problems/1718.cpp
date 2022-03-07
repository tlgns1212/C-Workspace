#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A, B, C;
    int length = 0;

    getline(cin, A);
    cin >> B;
    for (int i = 0; i < A.length(); i++)
    {
        if (A[i] == ' ')
        {
            C += ' ';
        }
        else if ((A[i] - '0') - (B[length] - '0') <= 0)
        {
            C += (A[i] - '0') - (B[length] - '0') - 1 + 26 + 'a';
        }
        else
        {
            C += (A[i] - '0') - (B[length] - '0') - 1 + 'a';
        }
        length = (length + 1) % B.length();
    }
    cout << C;
}