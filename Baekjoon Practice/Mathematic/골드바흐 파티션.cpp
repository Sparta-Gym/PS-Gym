#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000000;
bool check[MAX + 1];
int eratosthenes[MAX];
int cnt;
int primes;

int Goldbach(const int n) {
  cnt = 0;
  primes = 0;
  // 0,1 ���� ó��
  check[0] = check[1] = true;
  // i*i ~ n������ �� �� �ܰ迡�� �ɷ���
  for (int i = 2; i <= n; ++i) {
    if (!check[i]) {
      // �Ҽ� ���� ����
      eratosthenes[primes++] = i;
      // i*i�� �����÷ο� ��������� 2*i�� �ϴ°� ����
      for (int j = 2 * i; j <= n; j += i) {
        check[j] = true;
      }
    }
  }
  int loop = 0; // ���� ���� => �Ҽ��� ������ ����
  for (int i = 1; i < primes; ++i) {
    // �ߺ� ���� ���.. ���� ���������� �� ���ָ� �ȴ�.
    if (n - eratosthenes[i] >= eratosthenes[i]) {
      // n-eratosthenes�� �� ū ���·� ������ �����ϴϱ�..
      if (!check[n - eratosthenes[i]]) {
        cnt += 1;
      }
    }
  }

  return cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    cout << Goldbach(n) << '\n';
  }
  return 0;
}