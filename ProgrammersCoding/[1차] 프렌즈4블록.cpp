#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    bool visited[31][31] = {false, };
    bool isRemove = true;
    
    while(isRemove){
        isRemove = false;
        
        for(int i = 1; i < board.size(); i++){
            for(int j = 1; j < board[0].size(); j++){
                if(board[i][j] != '0' && board[i][j] == board[i][j-1] && board[i][j-1] == board[i-1][j-1] && board[i-1][j-1] == board[i-1][j] && board[i-1][j] == board[i][j]){
                    visited[i][j] = true;
                    visited[i][j-1] = true;
                    visited[i-1][j-1] = true;
                    visited[i-1][j] = true;
                    isRemove = true;
                }
            }
        }
        
        for(int i = 0; i < board.size(); i++){
            for(int j = 0; j < board[0].size(); j++){
                if(visited[i][j]){
                    answer++;
                    board[i][j] = '0';
                    visited[i][j] = false;
                }
            }
        }
        
        for(int i = board.size() - 1; i >= 0; i--){
            for(int j = 0; j < board[0].size(); j++){
                if(board[i][j] == '0'){
                    for(int k = i - 1; k >= 0; k--){
                        if(board[k][j] != '0'){
                            char temp = board[k][j];
                            board[k][j] = board[i][j];
                            board[i][j] = temp;
                            break;
                        }
                    }
                }
            }
        }
    }
    
    return answer;
}