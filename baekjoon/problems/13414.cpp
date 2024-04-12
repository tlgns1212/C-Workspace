
#include <iostream>
#include <queue>
#include <map>
using namespace std;

int K, L, count;
queue<string> q;
map<string, int> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> K >> L;
    for (int i = 0; i < L; i++)
    {
        string student;
        cin >> student;
        q.push(student);
        m[student]++;
    }
    while (!q.empty())
    {
        if (count == K)
            break;
        string student = q.front();
        q.pop();

        if (--m[student] == 0)
        {
            count++;
            cout << student << '\n';
        }
    }

    return 0;
}
