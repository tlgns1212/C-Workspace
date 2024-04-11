#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int V, A = 0, B = 0;
    string votes;

    cin >> V;
    cin >> votes;

    for (auto it = votes.cbegin(); it != votes.cend(); ++it)
    {
        if (*it == 'A')
            A++;
        else
            B++;
    }
    cout << (A > B ? "A" : (A == B ? "Tie" : "B"));

    return 0;
}