#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int L, C, Size;
vector<char> Letters;
vector<char> Answers;

void DFS(int NowIndex, int Count){
    if(NowIndex > Size) {
        return;
    }
    if(Count == L){
        int vowels = 0, consonants = 0;
        for(char letter : Answers){
            if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
                vowels++;
            }
            else{
                consonants++;
            }
        }
        if(vowels >= 1 && consonants >= 2){
            for(char answer : Answers){
                cout << answer;
            }
            cout << '\n';
        }
        return;
    }

    for(int i = NowIndex + 1; i < Size; i++){
        Answers.push_back(Letters[i]);
        DFS(i,Answers.size());
        Answers.pop_back();
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> L >> C;
    char Letter;
    for(int i = 0; i < C; i++){
        cin >> Letter;
        Letters.push_back(Letter);
    }
    Size = Letters.size();
    sort(Letters.begin(), Letters.end());

    for(int i = 0; i <= (C-L); i++){
        Answers.push_back(Letters[i]);
        DFS(i,1);
        Answers.clear();
    }
    return 0;
}