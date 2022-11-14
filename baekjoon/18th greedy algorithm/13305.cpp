#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, temp, least = 1000000001;
    vector<int> road;
    vector<int> gasStation;
    long long answer = 0, went = 0;

    cin >> N;
    for (int i = 0; i < N - 1; i++)
    {
        cin >> temp;
        road.push_back(temp);
    }
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        gasStation.push_back(temp);
    }
    // 여기까지는 입력

    for (int i = 0; i < N - 1; i++) // 마지막 도착지까지가 아닌 마지막 도로까지만 반복
    {
        if (least > gasStation[i]) // 현재까지 가장 싼 기름값보다 더 싼곳을 찾으면
        {
            answer += went * least; // 지금까지 온 거리만큼의 기름만 사고,
            went = 0;
            least = gasStation[i]; // 싼 기름 가격 저장
        }
        went += road[i]; // 더 싼 기름 찾을때까지 계속 도로 길이만큼 저장
    }
    answer += went * least; // 마지막 도착지까지의 거리는 위의 반복문에서 계산 못하니 추가로 계산
    cout << answer;

    return 0;
}