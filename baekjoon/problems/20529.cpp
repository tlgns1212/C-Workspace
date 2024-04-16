#include <iostream>
#include <string>
#include <vector>
using namespace std;

int T, N, answer;
vector<string> MBTIs;

int GetDist(const string& A, const string& B){
    int answer = 0;
    for(int i = 0; i < 4; i++){
        if(A[i] != B[i]) answer++;
    }
    return answer;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while(T--){
        MBTIs.clear();
        answer = 20;
        cin >> N;
        for(int i = 0; i < N; i++){
            string temp;
            cin >> temp;
            MBTIs.push_back(temp);
        }
        if(N > 32){
            answer = 0;
        }
        else{
            for(int i = 0; i < N-2; i++){
                for(int j = i+1; j < N-1; j++){
                    for(int k = j+1; k < N; k++){
                        answer = min(answer, GetDist(MBTIs[i], MBTIs[j]) + GetDist(MBTIs[i], MBTIs[k]) + GetDist(MBTIs[j], MBTIs[k]));
                    }
                }
            }
        }


        cout << answer << '\n';
    }
    return 0;
}