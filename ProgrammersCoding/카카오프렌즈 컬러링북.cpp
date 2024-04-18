#include <vector>
#include <queue>

using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    int dir[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
    vector<vector<bool>> visited(m, vector<bool> (n,false));
    queue<pair<int,int>> qp;
    int count = 0;
    
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(visited[i][j] == false && picture[i][j] != 0){
                number_of_area++;
                count = 1;
                qp.push({i,j});
                visited[i][j] = true;
                while(!qp.empty()){
                    int y = qp.front().first;
                    int x = qp.front().second;
                    qp.pop();
                    
                    for(int k = 0; k < 4; k++){
                        int yy = y + dir[k][0];
                        int xx = x + dir[k][1];
                        if(yy < 0 || yy >= m || xx < 0 || xx >= n) continue;
                        if(picture[yy][xx] == picture[y][x] && !visited[yy][xx]){
                            visited[yy][xx] = true;
                            qp.push({yy,xx});
                            count++;
                        }
                    }
                }
                max_size_of_one_area = max(max_size_of_one_area, count); 
            }
        }
    }
    
    
    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}