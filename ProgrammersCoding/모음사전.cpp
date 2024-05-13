#include <string>
#include <vector>
using namespace std;

bool isAnswerFound = false;
vector<char> letters;
int answer = 0;

void DFS(string curWord, const string& answerWord){
    if(curWord.size() > 5 || isAnswerFound){
        return;
    }
    answer++;
    if(curWord == answerWord){
        isAnswerFound = true;
        return;
    }
    for(char c : letters){
        if(isAnswerFound)
            return;
        DFS(curWord + c, answerWord);
    }
}


int solution(string word) {
    letters.push_back('A');
    letters.push_back('E');
    letters.push_back('I');
    letters.push_back('O');
    letters.push_back('U');
    
    for(char c : letters){
        string s{c};
        DFS(s, word);
    }
    
    return answer;
}