#include <iostream>
#include <string>
using namespace std;
int solution(string s)
{
    int answer = 0;
    if(s.size() == 0) return 0;
    
    for(int i = 0; i < s.size(); i++){
        int pelindrom = 1;
        int j = 0;
        while(1){
            j++;
            if(i - j < 0 || i + j >= s.size()) break;
            if(s[i-j] == s[i+j]){
                pelindrom += 2;
            }
            else{
                break;
            }
        }
        answer = max(answer, pelindrom);
        pelindrom = 0;
        j = 0;
        while(1){
            j++;
            if(i - j + 1 < 0 || i + j >= s.size()) break;
            if(s[i-j+1] == s[i+j]){
                pelindrom += 2;
            }
            else{
                break;
            }
        }
        answer = max(answer, pelindrom);
    }
    
    return answer;
}