#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 51

int maxCandy = 0;

void countColumnCandy(char arr[MAX][MAX], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] == arr[i][j + 1])
                count++;
            else
            {
                if (count > maxCandy)
                    maxCandy = count;
                count = 1;
            }
        }
    }
}

void countRowCandy(char arr[MAX][MAX], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 1;
        for (int j = 0; j < size; j++)
        {
            if (arr[j][i] == arr[j + 1][i])
                count++;
            else
            {
                if (count > maxCandy)
                    maxCandy = count;
                count = 1;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    char candy[MAX][MAX];

    cin >> N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> candy[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            swap(candy[i][j], candy[i][j + 1]);
            countRowCandy(candy, N);
            countColumnCandy(candy, N);
            swap(candy[i][j + 1], candy[i][j]);

            swap(candy[j][i], candy[j + 1][i]);
            countRowCandy(candy, N);
            countColumnCandy(candy, N);
            swap(candy[j + 1][i], candy[j][i]);
        }
    }

    cout << maxCandy;

    return 0;
}