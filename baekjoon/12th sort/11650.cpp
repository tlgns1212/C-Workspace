#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int input;
    cin >> input;

    pair<int, int> p[100000];

    for (int i = 0; i < input; i++)
        cin >> p[i].first >> p[i].second;

    sort(p, p + input);

    for (int i = 0; i < input; i++)
        cout << p[i].first << " " << p[i].second << "\n";

    return 0;
}