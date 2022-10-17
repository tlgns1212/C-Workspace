#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b, answer;
    vector<string> s = {"neither", "factor", "multiple"};
    while (1)
    {
        cin >> a >> b;
        answer = 0;
        if (a == 0 && b == 0)
            break;
        if (b % a == 0)
            answer++;
        else if (a % b == 0)
            answer += 2;

        cout << s[answer] << '\n';
    }
}