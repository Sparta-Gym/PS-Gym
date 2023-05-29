#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int dp[501];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  vector<pair<int, int>> tower;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int tower1, tower2;
    cin >> tower1 >> tower2;
    tower.push_back(make_pair(tower1, tower2));
  }
  /* �����Ѵٴ� ���� �� ���� Ÿ���� ��ȣ�� ���������� ������� �ʴ´ٴ� ��
   * �ϳ��� ž�� �������� �����ϰ� �� ���� ž�� ��ȣ�� LIS�� ���ϰ�,
   * ��ü �������� LIS ���̸� ���� ������ �����ٳ��´�.
   * ������ �ִ� ������ �������� => ���������� ����..
   * �� ������ ������ ���� ������ LIS�����غ��� ������
   */
  sort(tower.begin(), tower.end());
  int max = 1;
  for (int i = 0; i < n; ++i) {
    dp[i] = 1;
    for (int j = 0; j < i; ++j) {
      if (tower[j].second < tower[i].second && dp[i] < dp[j] + 1) {
        dp[i] = dp[j] + 1; // 0 ~ i �����߿��� dp[i]���� ��� ��ȭ�ϹǷ� ����
      }
    }
    if (max < dp[i]) {
      max = dp[i];
    }
  }
  cout << n - max << '\n';
  return 0;
}