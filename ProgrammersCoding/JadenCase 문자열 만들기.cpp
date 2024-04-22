#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    bool shouldUpper = true;
    for(char c : s){
        if(c == ' '){
            shouldUpper = true;
            answer += c;
        }
        else if(shouldUpper){
            answer += (isalpha(c) ? toupper(c) : c);
            shouldUpper = false;
        }
        else{
            answer += (isalpha(c) ? tolower(c) : c);
        }
    }
    
    return answer;
}