
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
long long answer;
vector<int> negNums, posNums;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp >= 0)
            posNums.push_back(temp);
        else
            negNums.push_back(temp);
    }
    sort(posNums.rbegin(), posNums.rend());
    sort(negNums.begin(), negNums.end());

    // 음수가 1 이하일때까지 서로 곱하기
    // 양수는 서로 곱하기
    // 마지막에 더하기, 음수 남아있으면 묶지 않기

    return 0;
}
// 4 -1 2 1 3
// 6

// 6 0 1 2 4 3 5
// 27

// 1 -1
// -1

// 3 -1 0 1
// 1

// 2 1 1
// 2