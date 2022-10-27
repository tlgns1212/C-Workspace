#include <iostream>
#include <vector>
using namespace std;

int main() // 15746의 나머지 구하는거 깜빡해서 한 5분 날림 ㅠㅠ
{

    int n;
    vector<int> f;
    f.reserve(1000001);
    cin >> n;

    f.push_back(1);
    f.push_back(2);
    for (int i = 2; i < n; i++)
    {
        f.push_back((f[i - 1] + f[i - 2]) % 15746);
    }
    cout << f[n - 1];

    return 0;
}