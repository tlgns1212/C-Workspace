#include <iostream>
#include <map>
using namespace std;

int N, Answer;
string Letters;
map<char,int> m;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    cin >> Letters;

    int l = 0, r = 0;
    m[Letters[l]]++;
    while(l <= r && r < Letters.length()){
        // cout << l << ' ' << r << ' ';
        // for(int i = l; i <= r; i++){
        //     cout << Letters[i] << ' ';
        // }
        // cout << m.size();
        // cout << '\n';
        if(m.size() <= N){
            Answer = max(Answer, r-l+1);
            r++;
            m[Letters[r]]++;
        }
        else{
            if(m[Letters[l]] > 1){
                // cout << "letters " << l << ' '<<  Letters[l] << ' ' << m[Letters[l]] <<'\n';
                m[Letters[l]]--;
            }
            else{
                // cout << "letters " << l << ' '<<  Letters[l] << ' ' << m[Letters[l]] <<'\n';
                m.erase(Letters[l]);
            }
            l++;
        }
    }
    cout << Answer;

    return 0;
}

// 2
// abbcaccba

// 4