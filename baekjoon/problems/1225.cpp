#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string A, B;
    long long answer = 0;
    cin >> A >> B;

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < B.size(); j++)
        {
            answer += (A[i] - '0') * (B[j] - '0');
        }
    }
    cout << answer;
}