#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // string A, B;
    char A[10001], B[10001], C[10001];
    int i = 0, j = 0, x, y, carry = 0, k = 0;
    cin >> A >> B;
    while (A[i] != '\0')
    {
        i++;
    }
    while (B[j] != '\0')
    {
        j++;
    }
    i--;
    j--;
    while (i >= 0 || j >= 0)
    {
        if (i < 0)
        {
            x = 0;
        }
        else
        {
            x = A[i] - '0';
        }

        if (j < 0)
        {
            y = 0;
        }
        else
        {
            y = B[j] - '0';
        }

        if (x + y + carry > 9)
        {
            C[k] = x + y + carry - 10;
            carry = 1;
        }
        else
        {
            C[k] = x + y + carry;
            carry = 0;
        }
        k++;
        i--;
        j--;
    }
    if (carry == 1)
    {
        C[k] = 1;
        k++;
    }
    k--;
    while (k >= 0)
    {
        cout << C[k];
        k--;
    }
}