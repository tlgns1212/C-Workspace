#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0, nSize = numbers.size();
    queue<pair<int,int>> qp;
    
    qp.push({-numbers[0],0});
    qp.push({numbers[0],0});
    
    while(!qp.empty()){
        int num = qp.front().first;
        int idx = qp.front().second;
        qp.pop();
        
        if(idx >= nSize - 1){
            if(target == num){
                answer++;
            }
            continue;
        }
        
        qp.push({num + numbers[idx + 1], idx + 1});
        qp.push({num - numbers[idx + 1], idx + 1});
    }
    
    
    return answer;
}