#include <iostream>
using namespace std;

int M, N;
int Graph[501][501];
int DP[501][501];
int dir[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
int Answer;

int DFS(int x, int y){
    if(x == M - 1 && y == N - 1) return 1;
    if(DP[y][x] != -1) return DP[y][x];

    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> M >> N;
    int Temp;
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++){
            cin >> Graph[i][j];
            DP[i][j] = -1;
        }
    }

    return 0;
}