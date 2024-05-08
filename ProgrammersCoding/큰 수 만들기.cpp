#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    
    int idx = 0;
    
    for(int i = 0; i < number.size() - k; i++){
        int maxNum = number[idx];
        for(int j = idx; j <= i + k; j++){
            if(maxNum < number[j]){
                maxNum = number[j];
                idx = j;
            }
        }
        idx++;
        answer += maxNum;
    }
    
    return answer;
}