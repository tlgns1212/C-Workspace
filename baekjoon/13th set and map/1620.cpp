#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, tempInt;
    vector<string> names;
    names.reserve(100001);
    map<string, int> m;
    string temp;
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        cin >> temp;
        // if (islower(temp[0]))
        //     temp[0] = toupper(temp[0]);
        // if (isupper(temp[temp.size() - 1]))
        //     temp[temp.size() - 1] = tolower(temp[temp.size() - 1]);
        m[temp] = i;
        names.push_back(temp);
    }
    for (int i = 0; i < M; i++)
    {
        // char findPoke[21];
        // cin >> findPoke;
        // if (isdigit(findPoke[0]))
        // {
        //     tempInt = atoi(findPoke);
        //     cout << names[tempInt - 1] << endl;
        // }
        // else
        // {
        //     cout << m[temp] << endl;
        // }
        cin >> temp;
        if (isdigit(temp[0]))
        {
            tempInt = stoi(temp);
            cout << names[tempInt - 1] << '\n';
        }
        else
        {
            cout << m[temp] << '\n';
        }
    }
    return 0;
}