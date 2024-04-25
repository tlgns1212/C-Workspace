#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

long long solution(int n, vector<int> works) {
    long long answer = 0;
    priority_queue<long long> pq;
    
    for(int work : works){
        pq.push(work);
    }
    
    while(1){
        int top = pq.top();
        pq.pop();
        top--;
        n--;
        pq.push(top);
        if(top == -1){
            return 0;
        }
        if(n == 0){
            break;
        }
    }
    while(!pq.empty()){
        int top = pq.top();
        pq.pop();
        answer += (top * top);
    }
    
    return answer;
}