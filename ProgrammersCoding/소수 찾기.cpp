#include <string>
#include <vector>
#include <iostream>

#define MAX_SIZE 10000000

using namespace std;

bool isPrime[MAX_SIZE];
bool isUsed[MAX_SIZE];
bool Visited[8];
int answer = 0;

void eratos(){
    for(int i = 2; i < MAX_SIZE; i++){
        isPrime[i] = true;
    }
    
    for(int i = 2; i < MAX_SIZE; i++){
        if(isPrime[i]){
            for(int j = i*i; j < MAX_SIZE; j+=i){
                isPrime[j] = false;
            }
        }
    }
}

void DFS(const string& totalNumbers, string curNum){
    if(totalNumbers.size() < curNum.size()){
        return;
    }
    
    int num = stoi(curNum);
    
    if(!isUsed[num]){
        isUsed[num] = true;
        if(isPrime[num]){
            answer++;
        }
    }
    
    for(int i = 0; i < totalNumbers.size(); i++){
        if(Visited[i]){
            continue;
        }
        Visited[i] = true;
        DFS(totalNumbers, curNum + to_string(totalNumbers[i] - '0'));
        Visited[i] = false;
    }
}


int solution(string numbers) {
    eratos();
    
    for(int i = 0; i < numbers.size(); i++){
        Visited[i] = true;
        DFS(numbers, to_string(numbers[i] - '0'));
        Visited[i] = false;
    }
    
    
    
    return answer;
}