#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string color[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string temp;
    int A[3];
    long long answer;
    for (int i = 0; i < 3; i++)
    {
        cin >> temp;
        for (int j = 0; j < 10; j++)
        {
            if (color[j] == temp)
            {
                A[i] = j;
            }
        }
    }
    answer = A[0] * 10 + A[1];
    for (int i = 0; i < A[2]; i++)
    {
        answer *= 10;
    }
    cout << answer;
}