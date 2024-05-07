#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string& a, const string& b){
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> sNumbers(numbers.size(),"");
    for(int i = 0; i < numbers.size(); i++){
        sNumbers[i] = to_string(numbers[i]);
    }
    sort(sNumbers.begin(), sNumbers.end(), cmp);
    for(string s : sNumbers){
        answer += s;
    }
    if(sNumbers[0] == "0"){
        answer = "0";
    }
    
    return answer;
}