#include <string>
#include <vector>
#include <iostream>

using namespace std;

string ChangeToBinary(int n){
    string s = "";
    int remainder = 0;
    while(n > 0){
        remainder = n%2;
        if(remainder == 0){
            s = "0" + s;
        }
        else{
            s = "1" + s;
        }
        n/=2;
    }
    return s;
}


int CountOnes(int n){
    int countOnes = 0;
    string s = ChangeToBinary(n);
    for(char c : s){
        if(c == '1'){
            countOnes++;
        }
    }
    return countOnes;
}

int solution(int n) {
    int answer = 0;
    
    int nCount = CountOnes(n);
    for(int i = n + 1; i < 1000001; i++){
        if(CountOnes(i) == nCount){
            answer = i;
            break;
        }
    }
    
    return answer;
}