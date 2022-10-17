#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2)
{
    vector<vector<int>> answer;
    vector<int> tempanswer;
    answer.reserve(101);
    tempanswer.reserve(101);
    int temp;
    for (int i = 0; i < arr1.size(); i++)
    {
        tempanswer.clear();
        for (int j = 0; j < arr2[0].size(); j++)
        {
            temp = 0;
            for (int k = 0; k < arr1[i].size(); k++)
            {
                temp += arr1[i][k] * arr2[k][j];
            }
            tempanswer.push_back(temp);
        }
        answer.push_back(tempanswer);
    }
    return answer;
}