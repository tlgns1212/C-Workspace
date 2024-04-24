#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    int A = max(a,b);
    int B = min(a,b);
    
    while(B != 0){
        int C = A % B;
        A = B;
        B = C;
    }
    return A;
}

int solution(vector<int> arr) {
    int answer = 1;
    
    for(int i = 0; i < arr.size(); i++){
        int gcdNum = gcd(answer, arr[i]);
        answer = (answer * arr[i]) / (gcdNum);
    }
    
    return answer;
}