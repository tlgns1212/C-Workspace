#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    vector<string> result;
    map<string, string> nameMap;
    vector<string> words;
    
    for(string r : record){
        stringstream ss(r);
        string word;

        while(getline(ss, word, ' ')){
            words.push_back(word);
        }    
    }
    
    
    int idx = 0;
    while(idx != words.size()){
        if(words[idx][0] == 'E'){
            nameMap[words[idx+1]] = words[idx+2];
            result.push_back("In");
            result.push_back(words[idx+1]);
            idx+= 3;
        }
        else if(words[idx][0] == 'C'){
            nameMap[words[idx+1]] = words[idx+2];
            idx+= 3;
        }
        else{
            result.push_back("Out");
            result.push_back(words[idx+1]);
            idx+= 2;
        }
    }
    
    idx = 0;
    while(idx != result.size()){
        if(result[idx][0] == 'I'){
            string temp = nameMap[result[idx+1]] + "님이 들어왔습니다.";
            answer.push_back(temp);
            idx += 2;
        }
        else{
            string temp = nameMap[result[idx+1]] + "님이 나갔습니다.";
            answer.push_back(temp);
            idx += 2;
        }
    }
    
    
    return answer;
}