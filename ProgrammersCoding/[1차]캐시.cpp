#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    vector<string> cache;
    
    if(cacheSize == 0){
        return cities.size() * 5;
    }
    
    for(string city : cities){
        transform(city.begin(), city.end(), city.begin(), ::tolower);
        auto it = find(cache.begin(), cache.end(), city);
        if(it != cache.end()){
            cache.erase(it);
            cache.push_back(city);
            answer++;
        }
        else{
            if(cache.size() >= cacheSize){
                cache.erase(cache.begin() + 0);
                cache.push_back(city);
            }
            else{
                cache.push_back(city);
            }
            answer += 5;
        }
    }
    
    
    
    
    return answer;
}