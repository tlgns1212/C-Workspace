// #include <iostream>
// // #include <vector>
// using namespace std;

// int N, minA = 1000000001;
// // vector<vector<int>> team;
// int team[21][21];
// bool visited[21] = {
//     false,
// };

// void dfs(int cnt)
// {
//     if (cnt == N / 2)
//     {
//         int start = 0, link = 0;
//         for (int i = 0; i < N; i++)
//         {
//             for (int j = 0; j < N; j++)
//             {
//                 if (visited[i] == true && visited[j] == true)
//                     start += team[i][j];
//                 if (visited[i] == false && visited[j] == false)
//                     link += team[i][j];
//             }
//         }
//         int temp = abs(start - link);
//         if (minA > temp)
//             minA = temp;
//         return;
//     }
//     for (int i = cnt; i < N; i++)
//     {
//         visited[i] = true;
//         dfs(cnt + 1);
//         visited[i] = false;
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     // vector<int> temp;
//     // int tempInt;

//     cin >> N;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < N; j++)
//         {
//             cin >> team[i][j];
//             // cin >> tempInt;
//             // temp.push_back(tempInt);
//         }
//         // team.push_back(temp);
//         // temp.clear();
//     }

//     dfs(0);
//     cout << minA;

//     return 0;
// }

#include <iostream>
#include <math.h>
using namespace std;

int stats[21][21];
bool check[22];
int N;
int ans = 1000000000;

void DFS(int x, int pos)
{
    if (x == N / 2)
    {
        int start, link;
        start = 0;
        link = 0;

        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if (check[i] == true && check[j] == true)
                    start += stats[i][j];
                if (check[i] == false && check[j] == false)
                    link += stats[i][j];
            }
        }

        int temp = abs(start - link);
        if (ans > temp)
            ans = temp;

        return;
    }

    for (int i = pos; i < N; i++)
    {
        check[i] = true;
        DFS(x + 1, i + 1);
        check[i] = false;
    }
}

int main()
{
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> stats[i][j];
        }
    }

    DFS(0, 1);

    cout << ans;
}