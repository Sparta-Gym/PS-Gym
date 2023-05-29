#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, direction;
// ��, ��, ��, �� ���� ����
int dx[] = {-1, 0, 1, 0};
int dy[] = {0, -1, 0, 1};

// �������� ȸ��
void turn_left() { direction = (direction + 1) % 4; }

int main(void) {
  cin >> n >> m;
  cin >> x >> y >> direction;
  vector<vector<int>> game_map(n, vector<int>(m, 0));
  game_map[x][y] = 1; // ���� ��ǥ �湮 ó��
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> game_map[i][j];
    }
  }
  // �ùķ��̼� ����
  int cnt = 1;
  int turn_time = 0;
  int trapped = 0;
  while (true) {
    turn_left();
    int nx = x + dx[direction];
    int ny = y + dy[direction];
    // �̵�
    if (nx < 0 || nx >= n || ny < 0 || ny >= m) { // �̵��� �� ���
      trapped += 1;
      if (trapped == 4)
        break;
      continue;
    } else {
      if (game_map[nx][ny] == 0) {
        game_map[nx][ny] = 1;
        x = nx;
        y = ny;
        cnt += 1;
        turn_time = 0;
        continue;
      }
      // ȸ���� ���� ���鿡 ������ ���� ĭ�� ���ų� �ٴ��� ���
      else
        turn_time += 1;
      // �� ���� ��� �� �� ���� ���
      if (turn_time == 4) {
        nx = x - dx[direction];
        ny = y - dy[direction];
        // �ڷ� �� �� �ִٸ� �̵��ϱ�
        if (game_map[nx][ny] == 0) {
          x = nx;
          y = ny;
        }
        // �ڰ� �ٴٷ� �����ִ� ���
        else
          break;
        turn_time = 0;
      }
    }
  }

  cout << cnt << '\n';
}