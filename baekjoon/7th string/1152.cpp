#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    char sent[1000001];
    int count = 1;
    cin.getline(sent, 1000001, '\n');

    for (int i = 0; sent[i] != '\0'; i++)
    {
        if (sent[i] == ' ' && (i == 0 || sent[i + 1] == '\0'))
        {
            continue;
        }
        else if (sent[i] == ' ')
        {
            count++;
        }
    }
    if (sent[0] == ' ' && sent[1] == '\0')
        cout << 0;
    else
        cout << count;
}