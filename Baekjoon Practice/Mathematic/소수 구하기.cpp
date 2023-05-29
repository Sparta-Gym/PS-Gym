#include <iostream>
#include <vector>

using namespace std;
// �����佺�׳׽��� ü
// check�迭�� ����� ��..
// check�迭�� �ε����� �ĺ����̰� check�迭�� ���� �Ҽ����� �ƴ����� ��Ÿ��
void Primes(int m, int n) {
  vector<bool> check(n + 1, false);
  // 0,1 ���� ó��
  check[0] = check[1] = true;
  // i*i ~ n������ �� �� �ܰ迡�� �ɷ���
  for (int i = 2; i <= n; ++i) {
    if (!check[i]) {
      // i*i�� �����÷ο� ��������� 2*i�� �ϴ°� ����
      for (int j = 2 * i; j <= n; j += i) {
        check[j] = true;
      }
    }
  }

  // m ~ n ������ ��� �Ҽ� ���
  for (int i = m; i <= n; ++i) {
    if (!check[i]) {
      cout << i << '\n';
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int m, n;
  cin >> m >> n;
  Primes(m, n);
  return 0;
}