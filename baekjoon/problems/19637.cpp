#include <iostream>
#include <string>
#include <vector>
using namespace std;

int N, M, score;
vector<pair<string,int>> achive;

void solution(int value){
    int start = 0, end = N-1, mid, answer;
    while(start <= end){
        mid = (start + end)/2;
        if(value <= achive[mid].second)
            end = mid - 1;
        else
            start = mid + 1;
    }
    if(value > achive[mid].second)
        cout << achive[mid + 1].first << '\n';
    else
        cout << achive[mid].first << '\n';
}

void input(){
    string tempS;
    int tempI;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> tempS >> tempI;
        achive.push_back(make_pair(tempS,tempI));
    }
    for(int i = 0 ; i < M; i++){
        cin >> tempI;
        solution(tempI);
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}