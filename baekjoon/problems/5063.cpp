#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, r, e, c;
    string answers[] = {"advertise", "does not matter", "do not advertise"};
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> r >> e >> c;
        cout << (r > e - c ? answers[2] : (r == e - c ? answers[1] : answers[0])) << '\n';
    }

    return 0;
}