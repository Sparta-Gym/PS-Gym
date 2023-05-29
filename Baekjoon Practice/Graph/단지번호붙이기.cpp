#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;
// �� �� �� ��
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int map[30][30];
int check[30][30];
int ans[25 * 25];
int n;

bool range_check(int x, int y) {
  if (x < 0)
    return false;
  else if (x >= n)
    return false;
  else if (y < 0)
    return false;
  else if (y >= n)
    return false;
  return true;
}
// ������ �迭������ ������ ��ȸ�� ���� ��������Ʈ�� ��������� �ʿ����
// => ������ ������ ����� ������ ȿ�������� �ľ��ϱ� ���� �������ε� ���⼭��
// �������� ���� Ž���̱� �����̴�.
void bfs(int x, int y, int group) {
  queue<pair<int, int>> q;
  q.push(make_pair(x, y));
  check[x][y] = group;
  while (!q.empty()) {
    x = q.front().first;
    y = q.front().second;
    q.pop();
    for (int k = 0; k < 4; ++k) {
      int nx = x + dx[k];
      int ny = y + dy[k];
      if (range_check(nx, ny)) {
        if (map[nx][ny] == 1 && check[nx][ny] == 0) {
          q.push(make_pair(nx, ny));
          check[nx][ny] = group;
        }
      }
    }
  }
}

int main() {
  int group = 0;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      scanf("%1d", &map[i][j]);
    }
  }

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      if (map[i][j] == 1 && check[i][j] == 0) {
        bfs(i, j, ++group);
      }
    }
  }
  cout << group << '\n';
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      ans[check[i][j]] += 1;
    }
  }
  // ���� ���� ������������ �����Ͽ� ���
  sort(ans + 1, ans + group + 1);
  for (int i = 1; i <= group; ++i) {
    cout << ans[i] << '\n';
  }
  return 0;
}