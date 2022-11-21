#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T, n;
    string p, x, tempS;
    char tempC;
    bool isFront = true, isError = false;

    cin >> T;
    for (int i = 0; i < T; i++)
    {
        isFront = true;  // 앞에서 시작인지, 뒤에서 시작인지 (R)
        isError = false; // Error 판별
        deque<int> dq;
        cin >> p;
        cin >> n;
        cin >> x;

        for (int i = 0; i < x.size(); i++) // 1.
        {
            if (isdigit(x[i]))
            {
                tempS += x[i]; // 십의자리가 나올수도 있으므로 저장
            }
            else
            {
                if (!tempS.empty())
                {
                    dq.push_back(stoi(tempS)); // 숫자만 저장
                    tempS.clear();
                }
            }
        }
        for (int i = 0; i < p.size(); i++)
        {
            tempC = p[i];
            if (tempC == 'R') // 2. R이면 앞뒤반전
            {
                isFront = !isFront;
            }
            else if (tempC == 'D') // 3. D이면 비었을 경우 error, 아니면 isFront에 따라 앞 혹은 뒤에서 하나씩 삭제
            {
                if (dq.empty())
                {
                    cout << "error\n";
                    isError = true;
                    break;
                }
                else
                {
                    if (isFront)
                    {
                        dq.pop_front();
                    }
                    else
                    {
                        dq.pop_back();
                    }
                }
            }
        }
        if (!isError) // 4.
        {
            cout << "[";
            while (!dq.empty())
            {
                if (isFront)
                {
                    cout << dq.front();
                    dq.pop_front();
                }
                else
                {
                    cout << dq.back();
                    dq.pop_back();
                }
                if (!dq.empty())
                {
                    cout << ',';
                }
            }
            cout << "]" << '\n';
        }
    }

    return 0;
}