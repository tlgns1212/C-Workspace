#include <iostream>
#include <string>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);

    int alen, blen;

    char a[10002] = {0}, b[10002] = {0};
    int c[10003] = {0}, cnt;
    scanf("%s %s", a, b);
    for (int i = 0; a[i] != 0; i++)
    {
        a[i] -= '0';
        alen = i;
    }
    for (int i = 0; b[i] != 0; i++)
    {
        b[i] -= '0';
        blen = i;
    }
    for (int i = 0; i <= alen / 2; i++)
    {
        char temp = a[i];
        a[i] = a[alen - i];
        a[alen - i] = temp;
    }
    for (int i = 0; i <= blen / 2; i++)
    {
        char temp = b[i];
        b[i] = b[blen - i];
        b[blen - i] = temp;
    }
    int max = alen > blen ? alen : blen;
    for (int i = 0; i <= max; i++)
    {
        c[i] += a[i] + b[i];
        if (c[i] > 9)
        {
            c[i] -= 10;
            c[i + 1] += 1;
            cnt = 1;
        }
        else
            cnt = 0;
    }
    max = (cnt == 1) ? max + 1 : max;
    for (int i = max; i >= 0; i--)
    {
        printf("%d", c[i]);
    }
    return 0;
}