#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  long long change;
  cin >> n >> change;
  vector<long long> coin(11);
  for (int i = 0; i < n; ++i) {
    cin >> coin[i];
  }
  // selection procedure -> �Ž��������ٴ� ���� �ִ� ũ�� ���� ���� ��
  // feasibility check -> �̰��� ����� ��, �ܵ��� �ʰ��ϴ�?
  // solution check -> �ܵ��ϰ� �� �͵��� ���ϰ� ����?
  long long sum = 0;
  int cnt = 0;
  for (int i = n - 1; i >= 0;) {

    sum += coin[i];
    if (sum > change) {
      sum -= coin[i];
      --i;
    }

    else if (sum == change) {
      break;
    }

    else {
      cnt++;
    }
  }

  cout << cnt + 1 << '\n';

  return 0;
}