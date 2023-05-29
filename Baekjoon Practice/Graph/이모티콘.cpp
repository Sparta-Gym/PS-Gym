#include <cstring>
#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

int time[1001][1001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  memset(time, -1, sizeof(time));
  queue<pair<int, int>> q;
  q.push(make_pair(1, 0));
  time[1][0] = 0;
  while (!q.empty()) {
    int s, c;
    // q.front()���� ���� pair�� first�� second�� s�� c�� ���� ������ ����
    // �����Ű�� ���� tie()�Լ� ���
    tie(s, c) = q.front();
    q.pop();
    if (time[s][s] == -1) {
      // ���� ȭ���� �̸�Ƽ���� Ŭ�����忡 ����
      time[s][s] = time[s][c] + 1;
      q.push(make_pair(s, s));
    }
    if (s + c <= n && time[s + c][c] == -1) {
      // ����ȭ�� + Ŭ������ �ٿ��ֱ�
      time[s + c][c] = time[s][c] + 1;
      q.push(make_pair(s + c, c));
    }
    if (s - 1 >= 0 && time[s - 1][c] == -1) {
      // ����ȭ�鿡�� �̸�Ƽ�� �� �ϳ� ����
      time[s - 1][c] = time[s][c] + 1;
      q.push(make_pair(s - 1, c));
    }
  }
  int ans = -1;
  for (int i = 0; i <= n; ++i) {
    if (time[n][i] != -1) {
      if (ans == -1 || ans > time[n][i]) {
        ans = time[n][i];
      }
    }
  }
  cout << ans << '\n';
  return 0;
}