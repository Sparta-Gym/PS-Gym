#include <algorithm>
#include <iostream>
using namespace std;

typedef long long ll;

ll cnt = 0;

ll count_machine(ll fac, ll n) {
  cnt = 0;
  ll square = n;
  while (square <= fac) {
    cnt += (fac / square);
    square *= n;
  }
  return cnt;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  // ���հ���
  //	  nCm
  //     n!
  //------------
  // (n-m)! * m!
  // ���⼭�� �������� ������ 2�� 5�� ���� ��� ã�������..
  // �ֳ��� 2�� ������ �� ������ 5�� ������ �� ������ ������ �����..
  ll n, m;
  cin >> n >> m;
  // 1) n!�� 2�� 5�� ���� ����
  // 2) (n-m)!�� 2�� 5�� ���� ����
  // 3) m!�� 2�� 5�� ���� ����
  // 1) - { 2) + 3) }
  // �� ���� �� ���� ���°��� ���ؾ� ���� ����������?
  ll five = count_machine(n, 5) - count_machine(n - m, 5) - count_machine(m, 5);

  ll two = count_machine(n, 2) - count_machine(n - m, 2) - count_machine(m, 2);

  ll result = min(two, five);

  cout << result << '\n';

  return 0;
}