#include <string>
#include <vector>
#include <iostream>
#include <map>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    map<string,int> m;
    int index = 0;
    char lastLetter = words[0][0];
    
    for(string word : words){
        m[word]++;
        if(m[word] >= 2 || word[0] != lastLetter){
//            cout << "word = " << word[0] << " letter " << lastLetter << '\n';
            int repeat = (index / n) + 1;
            int num = (index % n) + 1;
            answer.push_back(num);
            answer.push_back(repeat);
            break;
        }
        index++;
        lastLetter = word[word.size()-1];
    }
    
    if(answer.empty()){
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}