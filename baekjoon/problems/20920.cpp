#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int N, M;
unordered_map<string, int> m;
vector<string> answer;

bool compare(string a, string b)
{
    if (a.size() == b.size() && m[a] == m[b])
        return a < b;
    else if (m[a] == m[b])
        return a.size() > b.size();
    return m[a] > m[b];
}

void input()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        if (temp.size() < M)
            continue;
        if (m.find(temp) == m.end())
        {
            m[temp] = 0;
            answer.push_back(temp);
        }
        m[temp]++;
    }
}

void solution()
{
    sort(answer.begin(), answer.end(), compare);

    for (string i : answer)
    {
        cout << i << '\n';
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
    solution();

    return 0;
}