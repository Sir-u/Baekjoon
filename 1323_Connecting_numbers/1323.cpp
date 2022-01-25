#include <iostream>
#include <cmath>
// using namespace std;

bool Check[100001] = {0};

long long involution(int a, int b)
{
  if (b == 0)
  {
    return 1;
  }
  else if (b == 1)
  {
    return a;
  }
  long long tmp = involution(a, b / 2);
  if (b % 2)
  {
    return tmp * tmp * a;
  }
  else
  {
    return tmp * tmp;
  }
}

long long CheckCipher(int a)
{
  long long cipher = 0;
  while (a > 0)
  {
    cipher++;
    a /= 10;
  }
  cipher = involution(10, cipher);
  return cipher;
}

int main()
{
  int n = 0, k = 0;
  std::cin >> n >> k;
  long long cipher = CheckCipher(n); // n�� �ڸ���
  int remind = n % k;                    //�켱 ������ ���
  int cnt = 1;                       //ī��Ʈ �ʱⰪ 1
  while (remind != 0)                //������ �������� ���� ��� ����
  {
    remind = (remind * cipher + n) % k;

    if (Check[remind]) //�������� �ߺ��Ǿ� ����Ŭ�� �߻��� ���
    {
      cnt = -1;
      break;
    }
    Check[remind] = true;
    cnt++;
  }

  std::cout << cnt;
}
