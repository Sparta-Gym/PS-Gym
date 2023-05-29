#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define INF 1e9

int n, m;  // ���, ���� ����
int start; // ���� ���

vector<bool> visited(30000); // ��尡 100�� ���϶�� ������
vector<int> dist(30000, INF);
vector<pair<int, int>> graph[30000];

int visit = 0;
int time = 0;

void dijkstra(int start) {
  priority_queue<pair<int, int>> pq;
  pq.push(make_pair(0, start));
  dist[start] = 0;
  while (!pq.empty()) {
    int d = pq.top().first;
    int now = pq.top().second;
    pq.pop();
    if (dist[now] < d)
      continue; // �̹� ó���� ���� ����
    for (pair<int, int> edge : graph[now]) {
      int cost = d + edge.second;
      if (cost < dist[edge.first]) {
        dist[edge.first] = cost;
        pq.push(make_pair(cost, edge.first));
        visit += 1;
        if (cost > time) {
          time = cost;
        }
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  cin >> n >> m;
  cin >> start;
  for (int i = 0; i < m; ++i) {
    int from, to, cost;
    cin >> from >> to >> cost;
    graph[from].push_back(make_pair(to, cost));
  }

  dijkstra(start);

  cout << visit << ' ' << time << '\n';

  return 0;
}