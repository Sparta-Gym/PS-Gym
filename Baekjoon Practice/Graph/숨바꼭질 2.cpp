#include <iostream>
#include <queue>

#define MaxInput 100001

using namespace std;

int time[MaxInput];
int check[MaxInput];
int n, k;
int cnt;

void bfs(int start) {
  queue<int> q;
  q.push(start);
  time[start] = 0;
  while (!q.empty()) {
    int now = q.front();
    q.pop();
    if (now == k)
      cnt += 1;
    check[now] = true;
    // ���̽� ó�� �ǳ�
    for (int next : {now + 1, now - 1, now * 2}) {
      if (next >= 0 && next < MaxInput) {
        // ����� ���� ���� ���� �̹� �湮 �ߴ��� �ð��� ���ٸ� ť�� �ִ´�.
        // k�� ������ �� �� �ְ� ��� ť�� �ִ´�.
        // ��ǻ� ���Ʈ ������
        // bfs�� �� ���� �湮�ε�
        //  time[next] == time[now] + 1 �� ���ǿ� ���� ���� ���ǹ��� �� ����
        //  �̹� time[next]�� ���� ������ �ִ�.
        // ��, now���� �ѹ��� ���꿡 ���� next�� �� ���ִµ� �� ����
        // �ּҽð��ϰ� ������ �� ť�� �ִ´�.
        if (!check[next] || time[next] == time[now] + 1) {
          q.push(next);
          check[next] = true;
          time[next] = time[now] + 1;
        }
      }
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> k;
  bfs(n);
  cout << time[k] << '\n' << cnt << '\n';
  return 0;
}