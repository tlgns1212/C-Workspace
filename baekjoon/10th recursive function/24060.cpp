#include <iostream>

using namespace std;
int inputcnt = 0;

void merge(int *s, int p, int q, int r, int k)
{
    int i = p, j = q + 1, t = 1;
    int tmp[r + 2];
    while (i <= q && j <= r)
    {
        if (s[i] <= s[j])
        {
            tmp[t++] = s[i++];
        }
        else
        {
            tmp[t++] = s[j++];
        }
    }
    while (i <= q)
    {
        tmp[t++] = s[i++];
    }
    while (j <= r)
    {
        tmp[t++] = s[j++];
    }
    i = p;
    t = 1;
    while (i <= r)
    {
        s[i++] = tmp[t++];
        if (++inputcnt == k)
            cout << tmp[t - 1];
    }
}

void merge_sort(int *s, int p, int r, int k)
{
    int q;
    if (p < r)
    {
        q = (p + r) / 2;
        merge_sort(s, p, q, k);
        merge_sort(s, q + 1, r, k);
        merge(s, p, q, r, k);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int p[500002];
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < N; i++)
    {
        cin >> p[i];
    }
    merge_sort(p, 0, N - 1, K);
    if (inputcnt < K)
    {
        cout << -1;
    }
    return 0;
}