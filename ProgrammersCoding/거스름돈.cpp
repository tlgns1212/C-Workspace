#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int n, vector<int> money) {
    int answer = 0;
    vector<int> dp(n+1, 0);
    
    sort(money.begin(), money.end());
    
    for(int i = 0; i <= n; i++){
        dp[i] = (i % money[0] == 0 ? 1 : 0);
    }
    
    for(int i = 1; i < money.size(); i++){
        for(int j = money[i]; j <= n; j++){
            dp[j] = dp[j] + dp[j - money[i]];
        }
    }
    
    answer = dp[n];
    
    return answer;
}


// int solution(int n, vector<int> money) {
//     int answer = 0;
//     queue<pair<int,int>> qp;
    
//     sort(money.begin(), money.end());
    
//     for(int i = 0; i < money.size(); i++){
//         qp.push({money[i], i});
//     }
//     while(!qp.empty()){
//         int now = qp.front().first;
//         int index = qp.front().second;
//         qp.pop();
        
//         if(now == n){
//             answer++;
//             continue;
//         }
        
//         for(int i = index; i < money.size(); i++){
//             if(now + money[i] > n) break;
//             qp.push({(now + money[i]) % 1000000007, i});
//         }
//     }
    
    
//     return answer;
// }