// #include <string>
// #include <vector>

// using namespace std;

// int solution(int n) {
//     int answer = 0;
//     for(int i = 2; i < n; i++){
//         if(n % i == 1){
//             answer = i;
//             break;
//         }
//     }
//     return answer;
// }

#include <iostream>

using namespace std;

int main()
{
    int n;
    std::cin >> n;
    int answer = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 1)
        {
            answer = i;
            break;
        }
    }
    std::cout << answer;
}