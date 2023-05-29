#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, m;
  cin >> n >> m;
  vector<string> result(n + m + 2, "");
  vector<string> don_listen(n + 1, "");
  vector<string> don_see(m + 1, "");
  for (int i = 0; i < n; ++i) {
    cin >> don_listen[i];
  }
  for (int i = 0; i < m; ++i) {
    cin >> don_see[i];
  }
  sort(don_listen.begin(), don_listen.end());
  sort(don_see.begin(), don_see.end());
  // set_intersection�� ����Ϸ��� ������ �Ǿ��־���Ѵ�.
  auto itr = set_intersection(don_listen.begin(), don_listen.end(),
                              don_see.begin(), don_see.end(), result.begin());
  result.erase(itr, result.end()); // ��ȯ����, ������ �������� �� ���� iterator
  cout << result.size() - 1;
  for_each(result.begin(), result.end(),
           [&result](string str) { // python�� map�� ����
             cout << str << '\n';
           });
  return 0;
}