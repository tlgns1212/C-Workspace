#include <iostream>
#include <deque>
using namespace std;

int T, n, x[100001];
string p, str;
deque<int> dq;
bool isFront, isError;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while (T--)
    {
        cin >> p;
        cin >> n;
        cin >> str;
        string s = "";
        for (char c : str)
        {
            if (isdigit(c))
            {
                s += c;
            }
            else
            {
                if (s.length() != 0)
                {
                    dq.push_back(stoi(s));
                    s = "";
                }
            }
        }
        isFront = true;
        isError = false;
        for (char c : p)
        {
            if (c == 'R')
            {
                isFront = !isFront;
            }
            else if (c == 'D')
            {
                if (dq.empty())
                {
                    cout << "error" << '\n';
                    isError = true;
                    break;
                }
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
        if (!isError)
        {
            cout << '[';
            while (!dq.empty())
            {
                if (isFront)
                {
                    cout << dq.front();
                    dq.pop_front();
                    if (dq.size() > 0)
                        cout << ',';
                }
                else
                {
                    cout << dq.back();
                    dq.pop_back();
                    if (dq.size() > 0)
                        cout << ',';
                }
            }
            cout << "]\n";
        }
    }

    return 0;
}
