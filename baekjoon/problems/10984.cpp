#include <iostream>
using namespace std;

int T, N, C, sum;
double G, average;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> T;
    while(T--){
        cin >> N;
        sum = 0;
        average = 0;
        for(int i = 0; i < N; i++){
            cin >> C >> G;
            sum += C;
            average += G;
        }
        average = average/ N;
        cout.precision(2);
        cout << sum << " " << average << '\n';
    }
    return 0;
}