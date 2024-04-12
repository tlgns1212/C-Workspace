#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, total, answer;
    char game;
    map<string, int> names;

    cin >> N >> game;
    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        names[temp]++;
    }
    total = names.size();

    switch (game)
    {
    case 'Y':
        answer = total ;
        break;
    case 'F':
        answer = total / 2;
        break;
    case 'O':
        answer = total / 3;
        break;
    }
    cout << answer;
    return 0;
}