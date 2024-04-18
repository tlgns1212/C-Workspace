#include<vector>
#include<queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    int n = maps.size(), m = maps[0].size();
    int dir[4][2] = {{1,0},{0,1}, {-1,0}, {0,-1}};
    vector<vector<int>> visited(n, vector<int>(m,0));
    queue<pair<int,int>> qp;
    
    visited[0][0] = 1;
    qp.push({0,0});
    while(!qp.empty()){
        int y= qp.front().first;
        int x= qp.front().second;
        qp.pop();
        
        if(y == n-1 && x == m-1){
            break;
        }
        
        for(int i = 0; i < 4; i++){
            int yy = y + dir[i][0];
            int xx = x + dir[i][1];
            if(yy < 0 || yy >= n || xx < 0 || xx >= m) continue;
            if(visited[yy][xx] == 0 && maps[yy][xx] == 1){
                qp.push({yy,xx});
                visited[yy][xx] = visited[y][x] + 1;
            }
        }
    }
    
    answer = (visited[n-1][m-1] == 0 ? -1 : visited[n-1][m-1]);
    
    return answer;
}