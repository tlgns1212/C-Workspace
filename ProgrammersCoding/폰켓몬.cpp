#include <vector>
#include <map>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    int pickNum = nums.size()/2;
    map<int,int> pokemonBook;
    
    for(int num : nums){
        pokemonBook[num]++;
    }
    answer = min((int)pokemonBook.size(), pickNum);
    
    return answer;
}