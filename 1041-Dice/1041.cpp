// ����
//     +---+        
//     | 3 |        
// +---+---+---+---+
// | 5 | 0 | 1 | 4 |
// +---+---+---+---+
//     | 2 |        
//     +---+        
// �ֻ����� ���� ���� �����. �ֻ����� ���� �鿡�� ���� ���� �ִ�. ���� �������� ���� ������ ������ ���´�.
// A, B, C, D, E, F�� ���� �ִ� ���� �־�����.
// �����̴� ���� ������ �ֻ����� N3�� ������ �ִ�.
// �� �ֻ����� ������ ȸ����Ű�� �׾Ƽ�, N��N��Nũ���� ������ü�� ������� �Ѵ�. �� ������ü�� Ź������ �����Ƿ�, 5���� �鸸 ���δ�.
// N�� �ֻ����� ���� �ִ� ���� �־��� ��, ���̴� 5���� �鿡 ���� �ִ� ���� ���� �ּڰ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� N�� �־�����. ��° �ٿ� �ֻ����� ���� �ִ� ���� �־�����.
// ���� �׸����� A, B, C, D, E, F�� ���� �ִ� ���� ���ʴ�� �־�����.
// N�� 1,000,000���� �۰ų� ���� �ڿ����̰�, ���� �ִ� ���� 50���� �۰ų� ���� �ڿ����̴�.

// ���
// ù° �ٿ� ������ ������ 2����Ѵ�.

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