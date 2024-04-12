#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, K;
    string name;

    cin >> N >> name >> K;
    if (name[0] == 'a')
    {
        cout << (K % 2 == 1 ? K : K - 1);
    }
    else
    {
        cout << (K % 2 == 0 ? K : (K == 1 ? K + 1 : K - 1));
    }
}