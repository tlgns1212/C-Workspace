#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L, K;
vector<char> letters;

void dfs(string s, int now, int conso, int vowel)
{
    char c = letters[now];

    s.push_back(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        vowel++;
    else
        conso++;

    if (s.length() == L)
    {
        if (vowel >= 1 && conso >= 2)
            cout << s << '\n';
        return;
    }
    else if (s.length() > L)
        return;

    for (int i = now + 1; i < K; i++)
    {
        dfs(s, i, conso, vowel);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> L >> K;
    for (int i = 0; i < K; i++)
    {
        char temp;
        cin >> temp;
        letters.push_back(temp);
    }
    sort(letters.begin(), letters.end());

    for (int i = 0; i < K; i++)
    {
        dfs("", i, 0, 0);
    }

    return 0;
}

// 두개의 자음, 한개의 모음
// 4 6
// a t c i s w

// acis
// acit
// aciw
// acst
// acsw
// actw
// aist
// aisw
// aitw
// astw
// cist
// cisw
// citw
// istw