#include <algorithm>
#include <cstring>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

bool check[1001];
vector<int> a[1001];

/* Not using recursive in dfs

        void dfs(int node){
                stack<pair<int,int>>s;
                s.push(make_pair(node,0));
                check[node] = true;
                // pair�� second�� �ش� �������� �湮�� ��������Ʈ�� ��
                cout << node << ' ';
                while(!s.empty()){
                  int node = s.top().first;
                  int start = s.top().second;
                  s.pop();
                  for(int i =start; i<a[node].size(); ++i){
                        int next = a[node][i];
                        if(!check[next]){
                         cout << next << ' ';
                         // i�� size�ʰ� �Ǹ�
                         s.push(make_pair(node,i+1);
                         // next�� ��������Ʈ�� ���� ����
                         s.push(make_pair(next,0);
                         break;
                        }
                  }
                }
        }
*/

void dfs(int node) {
  check[node] = true;
  cout << node << ' ';
  for (int i = 0; i < (int)a[node].size(); ++i) {
    int next = a[node][i];
    if (!check[next]) {
      dfs(next);
    }
  }
}

void bfs(int start) {
  queue<int> q;
  memset(check, false, sizeof(check));
  check[start] = true;
  q.push(start);
  while (!q.empty()) {
    int node = q.front();
    q.pop();
    cout << node << ' ';
    for (int i = 0; i < (int)a[node].size(); ++i) {
      int next = a[node][i];
      if (!check[next]) {
        check[next] = true;
        q.push(next);
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, m, start;
  cin >> n >> m >> start;
  for (int i = 0; i < m; ++i) {
    int from, to;
    cin >> from >> to;
    a[from].push_back(to);
    a[to].push_back(from);
  }
  // ��, �湮�� �� �ִ� ������ ���� ���� ��쿡�� ���� ��ȣ�� ���� ���� ����
  // �湮 �̰��� �����ϱ� ���� ��������Ʈ�� sorting ��Ű�� �ȴ�.
  for (int i = 1; i <= n; ++i) {
    sort(a[i].begin(), a[i].end());
  }
  dfs(start);
  cout << '\n';
  bfs(start);
  cout << '\n';
  return 0;
}