#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    int sum = 0;
    for (int i = 1; i < +5; i++)
    {
        cout << i << "번째 정수 입력: " << i << '\n';
        sum += i;
    }
    cout << "합계: " << sum;
}
// 터미널에서 한글 나오게 바꾸는거 내용이랑 방법 추가하기