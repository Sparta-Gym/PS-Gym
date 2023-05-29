#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef struct edge {
  int cost;
  int from;
  int to;
} edge;
// ��� ���� ����� ���Ե� find ����
int find_(vector<int> &parent, int x) {
  if (parent[x] != x) {                   // ��Ʈ�� �ƴ϶��,
    parent[x] = find_(parent, parent[x]); // ��������� �θ� ã��
  }
  return parent[x];
  // return x;�� �ϰԵ� ���, ��� ���� ��� �̻�� �ڵ� ��Ʈ�� �ƴ� �ֵ���
  // �ڱ��ڽ��� ��ٷ� �ִ� �θ���� ����
}

void union_(vector<int> &parent, int a, int b) {
  a = find_(parent, a);
  b = find_(parent, b);
  a < b ? parent[b] = a : parent[a] = b;
}

int main() {
  int v, e;
  cin >> v >> e; // ���� ������ �����Է�
  vector<int> parent(v + 1, 0);
  for (int i = 1; i <= v; ++i) {
    parent[i] = i; // �θ� �ڱ��ڽ����� �ʱ�ȭ
  }
  vector<edge> edges;
  for (int i = 0; i < e; ++i) {
    int cost, from, to;
    cin >> from >> to >> cost;
    edges.push_back({cost, from, to});
  }
  int result = 0;
  sort(edges.begin(), edges.end(),
       [](edge a, edge b) { return a.cost < b.cost; });
  for (edge e : edges) {
    int cost = e.cost;
    int from = e.from;
    int to = e.to;
    if (find_(parent, from) != find_(parent, to)) { // cycle üũ
      union_(parent, from, to);
      result += cost;
    }
  }
  cout << result << '\n';
  return 0;
}