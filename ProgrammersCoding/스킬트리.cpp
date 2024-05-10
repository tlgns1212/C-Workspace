#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    vector<int> order(27,-1);
    
    for(int i = 0; i < skill.size(); i++){
        order[skill[i] - 'A'] = i;
    }
    
    for(string s : skill_trees){
        int idx = 0;
        bool isRight = true;
        for(char c : s){
            if(order[(c - 'A')] == -1) continue;
            else if(order[(c - 'A')] == idx){
                idx++;
            }
            else{
                isRight = false;
                break;
            }
        }
        answer += (isRight ? 1 : 0);
    }
    return answer;
}