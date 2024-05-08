#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    for(int i = citations.size(); i >= 0; i--){
        int bigger = 0, smaller = 0;
        for(int j = 0; j < citations.size(); j++){
            if(smaller > i){
                break;
            }
            if(citations[j] >= i){
                bigger++;
            }
            if(citations[j] <= i){
                smaller++;
            }
        }
        if(bigger >= i && smaller <= i){
            answer = i;
            break;
        }
    }
    return answer;
}