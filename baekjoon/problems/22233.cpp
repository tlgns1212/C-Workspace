#include <iostream>
#include <set>
#include <sstream>
using namespace std;

int N, M;
set<string> setS;


void solution(){
}

void input(){
    string temp;
    string now;
    istringstream ss;

    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> temp;
        setS.insert(temp);
    }
    for(int i = 0; i < M; i++){
        cin >> temp;
        ss.clear();
        ss.str(temp);
        while(getline(ss,now,',')){
            if(setS.find(now) != setS.end()){
                setS.erase(now);
            }
        }
        cout << setS.size() << '\n';
    }
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    input();
}