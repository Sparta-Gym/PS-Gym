#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n, m;
  cin >> n >> m;
  vector<vector<int>> paper(n, vector<int>(m));
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%1d", &paper[i][j]);
    }
  }

  // �ش� ĭ�� ���������� ���� ���� 0, �ش� ĭ�� ĭ�� ���������� ���� 1
  int ans = -1;
  for (int s = 0; s < (1 << m * n); ++s) {
    int sum = 0;
    // �������������� ĭ�� ����
    for (int i = 0; i < n; ++i) {
      int cur = 0;
      for (int j = 0; j < m; ++j) {
        int k = i * m + j;
        if ((s & (1 << k)) == 0) {
          // k�� (i,j) ĭ�� ��ȣ row by row�� ĭ�� ��ȣ �Ű��� ��
          cur = cur * 10 + paper[i][j];
          // ĭ�� ���Եɶ��� ���ڸ� ����
        } else {
          // ���� �ȵǸ� �� ������ �������̹Ƿ� ���տ� ����
          sum += cur;
          cur = 0;
        }
      }
      // �Ѱ��� ���� ���ϰ� ����� ���տ� ����
      sum += cur;
    }
    // �������������� ĭ�� ����
    for (int j = 0; j < m; ++j) {
      int cur = 0;
      for (int i = 0; i < n; ++i) {
        int k = i * m + j;
        if ((s & (1 << k)) != 0) {
          cur = cur * 10 + paper[i][j];
        } else {
          sum += cur;
          cur = 0;
        }
      }
      // �Ѱ��� ���� ���ϰ� ����� ���տ� ����
      sum += cur;
    }
    ans = max(sum, ans);
  }
  cout << ans << '\n';
  return 0;
}