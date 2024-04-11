#include <iostream>
using namespace std;

int k, S[13], arr[13];
bool visited[13];

void dfs(int start, int depth){
    if(depth == 6){
        for(int i = 0; i < 6; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = start; i < k ; i++){
        // if(!visited[i]){
            // visited[i] = true;
            arr[depth] = S[i];
            dfs(i+1,depth+1);
            // visited[i] = false;
        // }
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        cin >> k;
        if(k == 0)
            break;
        for(int i = 0; i < k; i++){
            cin >> S[i];
        }
        dfs(0,0);
        cout << '\n';
    }
    

    

    return 0;
}