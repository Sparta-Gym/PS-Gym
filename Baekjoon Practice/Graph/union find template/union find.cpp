#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

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
  for (int i = 0; i < e; ++i) {
    int a, b;
    cin >> a >> b;
    union_(parent, a, b);
  }
  // �� ���Ұ� ���� ������ ��Ʈ
  for (int i = 1; i <= v; ++i) {
    cout << find_(parent, i) << ' ';
  }
  cout << '\n';
  // �θ� ���̺�
  for (int i = 1; i <= v; ++i) {
    cout << parent[i] << ' ';
  }
  cout << '\n';
  return 0;
}