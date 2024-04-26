#include <string>
#include <vector>
#include <queue>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);
    priority_queue<pair<int,int>> pq;
    for(int i = 0; i < prices.size(); i++){
        int nowSize = prices[i];
        while(!pq.empty()){
            int prevSize = pq.top().first;
            int prevIndex = pq.top().second;
            
            // cout << "NowSize = " << nowSize << " , prevSize = " << prevSize << '\n';
            if(nowSize < prevSize){
                pq.pop();
                answer[prevIndex] = i - prevIndex;
            }
            else{
                break;
            }
        }
        pq.push({nowSize, i});
    }
    
    while(!pq.empty()){
        int size = pq.top().first;
        int index = pq.top().second;
        pq.pop();
        
        answer[index] = prices.size() - 1 - index;
    }
    
    // while(!pq.empty()){
    //     cout << pq.top().first << ' ' << pq.top().second << '\n';
    //     pq.pop();
    // }
    
    
    return answer;
}