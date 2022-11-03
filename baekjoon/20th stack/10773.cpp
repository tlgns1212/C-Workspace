#include <iostream>
#include <stack>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int K, temp, answer = 0;
    stack<int> si;

    cin >> K;
    for (int i = 0; i < K; i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            si.pop();
        }
        else
        {
            si.push(temp);
        }
    }
    while (!si.empty())
    {
        answer += si.top();
        si.pop();
    }
    cout << answer;

    return 0;
}