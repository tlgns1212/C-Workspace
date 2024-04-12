#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, tempInput, currentNum = 1;
    stack<int> sA;

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tempInput;
        if (tempInput > currentNum)
        {
            sA.push(tempInput);
        }
        else if (tempInput == currentNum)
        {
            currentNum++;
        }
        while (!sA.empty() && currentNum == sA.top())
        {
            sA.pop();
            currentNum++;
        }
    }
    cout << (sA.empty() ? "Nice" : "Sad");

    return 0;
}