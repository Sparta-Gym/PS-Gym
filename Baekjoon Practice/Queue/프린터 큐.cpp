#include <iostream>
#include <queue>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int order = 0;
  int tc;
  cin >> tc;
  int n, m, prio;

  while (tc--) {

    order = 0;
    cin >> n >> m;

    queue<pair<int, int>> q; // ������ ����, �ε��� ��
    priority_queue<int> pq;  // �켱���� ť

    for (int j = 0; j < n; ++j) {
      cin >> prio;
      q.push({j, prio});
      pq.push(prio);
    }

    while (!q.empty()) {

      int index = q.front().first;
      int value = q.front().second;

      q.pop();

      // �ñ��ѹ����� �߿䵵�� ����
      if (pq.top() == value) {
        pq.pop();
        order += 1;
        // �ε��� ���� ���ٸ�
        if (index == m) {
          cout << order << '\n';
          break;
        }
      }
      // ť ��ȯ
      else {
        q.push({index, value});
      }
    }
  }
}