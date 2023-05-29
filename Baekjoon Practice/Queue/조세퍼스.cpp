#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n, k;

  cin >> n >> k;

  queue<int> q;

  for (int i = 1; i <= n; ++i) {
    q.push(i);
  }

  cout << '<';
  // ��ŧ�� ť �տ��� ������ �ٽ� �ڷ� �ְ� �Է¸�ŭ(k) �ݺ�
  while (!q.empty()) {
    for (int j = 1; j < k; ++j) {
      q.push(q.front());
      q.pop();
    }
    // n ���� ���ڰ� ���
    cout << q.front();
    if (q.size() != 1)
      cout << ',' << ' ';
    q.pop();
  }

  cout << '>' << '\n';

  return 0;
}