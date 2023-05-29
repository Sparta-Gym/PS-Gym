#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

#define INF 1e9

int n, m; // ���, ���� ����

vector<vector<int>> graph(100, vector<int>(100, INF)); // 2���� �������

int main() {

  cin >> n >> m;

  for (int i = 0; i < m; ++i) {
    int from, to;
    cin >> from >> to;
    graph[from][to] = 1;
    graph[to][from] = 1;
  }

  int x, k;
  cin >> x >> k;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (i == j)
        graph[i][j] = 0; // �ڱ� �ڽſ��� �ڱ� �ڽ����� ���� ����� 0
    }
  }

  // floyd-whasher
  for (int k = 1; k <= n; ++k) {
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= n; ++j) {
        graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
      }
    }
  }

  int ans =
      graph[1][k] + graph[k][x]; // ��� ���ļ� ���� ���� => �÷��̵� ����

  ans >= INF ? cout << -1 << '\n' : cout << ans << '\n';

  return 0;
}