#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<int> a[100000];
bool check[100000];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 0; i < n - 1; ++i) {
    int from, to;
    cin >> from >> to;
    from -= 1;
    to -= 1;
    a[from].push_back(to);
    a[to].push_back(from);
  }
  // ����ڰ� �Է��ϴ� bfs ����
  vector<int> b(n);
  vector<int> order(n);
  for (int i = 0; i < n; ++i) {
    cin >> b[i];
    b[i] -= 1;
    order[b[i]] = i;
  }
  // �Է��� ������ ���� �������� �ʴ� ������ ��������Ʈ����
  for (int i = 0; i < n; ++i) {
    sort(a[i].begin(), a[i].end(), [&](const int &from, const int &to) {
      return order[from] < order[to];
    });
  }
  queue<int> q;
  // ���� ���� 1
  q.push(0);
  check[0] = true;
  vector<int> bfs_oreder;
  while (!q.empty()) {
    int previous = q.front();
    q.pop();
    bfs_oreder.push_back(previous);
    for (int next : a[previous]) {
      if (!check[next]) {
        q.push(next);
        check[next] = true;
      }
    }
  }
  bfs_oreder == b ? cout << 1 << '\n' : cout << 0 << '\n';
  return 0;
}