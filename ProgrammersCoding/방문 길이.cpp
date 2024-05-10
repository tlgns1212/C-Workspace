#include <string>
#include <map>
using namespace std;

int solution(string dirs) {
    int answer = 0;
    map<int, int> visitedMap;
    
    int y = 5, x = 5;
    
    for(char c : dirs){
        int moveNum1 = y * 1000000 + x * 10000;
        int moveNum2 = y * 100 + x;
        if(c == 'U'){
            y -= 1;
            if(y < 0){
                y = 0;
                continue;
            }
        }
        else if(c == 'D'){
            y += 1;
            if(y > 10){
                y = 10;
                continue;
            }
        }
        else if(c == 'L'){
            x -= 1;
            if(x < 0){
                x = 0;
                continue;
            }
        }
        else{
            x += 1;
            if(x > 10){
                x = 10;
                continue;
            }
        }
        moveNum1 += y * 100 + x;
        moveNum2 += y * 1000000 + x * 10000;
        visitedMap[moveNum1]++;
        visitedMap[moveNum2]++;
        
        if(visitedMap[moveNum1] == 1){
            answer++;
        }
    }
    
    
    return answer;
}