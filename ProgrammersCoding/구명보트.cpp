#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int backIdx = people.size() - 1;
    sort(people.begin(), people.end(), greater());
    
    for(int i = 0; i < people.size(); i++){
        if(i > backIdx){
            break;
        }
        
        if(people[i] + people[backIdx] <= limit){
            answer++;
            backIdx--;
        }
        else{
            answer++;
        }
    }
    
    return answer;
}