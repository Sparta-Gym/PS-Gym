#include <iostream>
#include <vector>

using namespace std;

#define INF 1e9

int n, m;  // ���, ���� ����
int start; // ���� ���

vector<bool> visited(100);
vector<int> dist(100, INF);
vector<pair<int, int>> graph[100];

int get_smallest_node() {
  int min_value = INF;
  int index = 0;
  for (int i = 1; i <= n; ++i) {
    if (dist[i] < min_value && !visited[i]) {
      min_value = dist[i];
      index = i; // �� ���� ���� ����� ���
    }
  }
  return index;
}

void dijkstra(int start) {

  dist[start] = 0;
  visited[start] = true;
  for (pair<int, int> edge : graph[start]) {
    dist[edge.first] =
        edge.second; // first�� ���� �Ÿ� second, direct path�� ����
  }
  for (int i = 0; i < n - 1; ++i) {
    int now = get_smallest_node();
    visited[now] = true;
    for (pair<int, int> edge : graph[now]) {
      int cost = dist[now] +
                 edge.second; // ��������� now������ �Ÿ�(���� ���õ� ���) +
                              // ���õ� ���� �ٸ� ������� �Ÿ��� ����.
      cost < dist[edge.first] ? dist[edge.first] = cost
                              : dist[edge.first] = dist[edge.first];
    }
  }
}

int main() {
  cin >> n >> m;
  cin >> start;
  for (int i = 0; i < m; ++i) {
    int from, to, cost;
    cin >> from >> to >> cost;
    graph[from].push_back(make_pair(to, cost));
  }

  dijkstra(start);

  for (int i = 1; i <= n; ++i) {
    if (dist[i] == INF)
      cout << "INFINITY\n";
    else
      cout << dist[i] << '\n';
  }
}