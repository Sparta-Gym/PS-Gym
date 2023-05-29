#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, m;
  cin >> n >> m;
  deque<int> dq;
  for (int i = 1; i <= n; ++i) {
    dq.push_back(i);
  }
  int op_cnt = 0;
  int target;
  // ȸ�� ť ������ �ϰԵǸ� ������ ���׹��׵ǹǷ� ����Ž�� �Ұ�
  for (int i = 0; i < m; ++i) {
    cin >> target;
    int j = 0;
    if (dq.front() == target) {
      dq.pop_front();
    } else {
      while (j < (int)dq.size()) {
        /*for (int i : dq) {
                cout << i << '\n';
        }*/
        if (target == dq[j]) {
          if (j < (int)dq.size() - j) { // �����̵� �������� ������ �ּ�
            while (dq.front() != target) {
              dq.push_back(dq.front());
              dq.pop_front();
              op_cnt += 1;
            }
            dq.pop_front();
            break;
          } else { // �������̵� �������� ������ �ּ�
            while (dq.front() != target) {
              dq.push_front(dq.back());
              dq.pop_back();
              op_cnt += 1;
            }
            dq.pop_front();
            break;
          }
        } else
          j += 1;
      }
    }
  }
  cout << op_cnt << '\n';
  return 0;
}