#include <iostream>

using namespace std;

void conversion(int n, int base) {
  if (n == 0)
    return;
  conversion(n / base, base);
  cout << n % base << ' ';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int a, b;
  cin >> a >> b;
  int m;
  cin >> m;
  int ans = 0;
  while (m--) {
    int n;
    cin >> n;
    // a�� �����ǰ� ���� �ʰ� ������ n�� a�� ��������������
    // xn * a^n + xn-1 * a^n-1 + ... �� ���� �ȴ�.
    ans = ans * a + n;
  }
  conversion(ans, b);
  return 0;
}