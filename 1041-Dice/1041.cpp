// 문제
//     +---+        
//     | 3 |        
// +---+---+---+---+
// | 5 | 0 | 1 | 4 |
// +---+---+---+---+
//     | 2 |        
//     +---+        
// 주사위는 위와 같이 생겼다. 주사위의 여섯 면에는 수가 쓰여 있다. 위의 전개도를 수가 밖으로 나오게 접는다.
// A, B, C, D, E, F에 쓰여 있는 수가 주어진다.
// 지민이는 현재 동일한 주사위를 N3개 가지고 있다.
// 이 주사위를 적절히 회전시키고 쌓아서, N×N×N크기의 정육면체를 만들려고 한다. 이 정육면체는 탁자위에 있으므로, 5개의 면만 보인다.
// N과 주사위에 쓰여 있는 수가 주어질 때, 보이는 5개의 면에 쓰여 있는 수의 합의 최솟값을 출력하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 N이 주어진다. 둘째 줄에 주사위에 쓰여 있는 수가 주어진다.
// 위의 그림에서 A, B, C, D, E, F에 쓰여 있는 수가 차례대로 주어진다.
// N은 1,000,000보다 작거나 같은 자연수이고, 쓰여 있는 수는 50보다 작거나 같은 자연수이다.

// 출력
// 첫째 줄에 문제의 정답을 2출력한다.

#include <iostream>
#include <algorithm>
//#include <min>
using namespace std;

int MinIndex(long long dice[], int min, int n)
{
    int min = minIdx;
    for(int i = 0; i < n; i++)
    {
        if(dice[i] < min)
        {
            minIdx = i;
        }
    }
    return minIdx
}

int main()
{
    long long int n, a, b, c;
    long long int ans = 0;
    cin >> n;

    long long int dice[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> dice[i];
    }

    int min = 51;

    int minIdx = MinIndex(dice, min, 6);

    if(minIdx = 0)


    //cout << "min index: " << minIdx << endl;
    // dice[0] + dice[1]
    // dice[1] + dice[4]
    // dice[4] + dice[5]
    // dice[5] + dice[0]
    // dice[2], dice[3]

    // a = min({dice[0], dice[1], dice[4], dice[5]})
    

    // ans = (long long)a * 4 * n + (long long)b * 4 * n + (long long)c * 4 + (long long)(n - 2) * (n - 2) * a * 5 + (long long)(n - 2) * a * 8 + (n - 2) * b * 4;
    if (n - 2 < 0)
    {
        sort(dice, dice+6);
        for(int i = 0; i < 5; i++)
        {
            ans += dice[i];
        }
    }
    else
    {
        ans = dice[0] * 4 * n + dice[1] * 4 * n + dice[2] * 4 + (n - 2) * (n - 2) * dice[0] * 5 + (n - 2) * dice[0] * 8 + (n - 2) * dice[1] * 4;
    }
    cout << ans;

}