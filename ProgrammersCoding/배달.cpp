#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<vector<int>> Road(51,vector<int>(51,-1));
vector<int> visited(51, -1);

int solution(int N, vector<vector<int> > road, int K) {
    int answer = 0;
    queue<int> q;

    for(int i = 0; i < road.size(); i++){
        int smaller = 99999999;
        if(Road[road[i][0]][road[i][1]] != -1){
            smaller = Road[road[i][0]][road[i][1]];
        }
        Road[road[i][0]][road[i][1]] = min(road[i][2], smaller);
        Road[road[i][1]][road[i][0]] = min(road[i][2], smaller);
    }
    
    visited[1] = 0;
    answer++;
    q.push(1);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        
        for(int i = 1; i <= N; i++){
            if(Road[now][i] >= 1){
                int next = visited[now] + Road[now][i];
                if(next <= K){
                    if(visited[i] == -1){
                        visited[i] = next;
                        answer++;
                        q.push(i);
                    }
                    else if(visited[i] > next){
                        visited[i] = next;
                        q.push(i);
                    }
                }
            }
        }
    }
    

    return answer;
}