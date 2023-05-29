#include <iostream>
#include <vector>

using namespace std;

/*
�ߺ��� ������ ����� ��ȭ����
d[n] = d[n-1] + d[n-2] + d[n-3]
���� d[n-1]�� d[n-2], d[n-3]�� ���� ���Ѵ��� d[n]�� ����������
1�� �Ἥ ǥ���� �� �ִ� ����, 2�� �Ἥ ǥ���� �� �ִ� ����, 3�� �Ἥ ǥ���� ��
�ִ� ������ d[n]�� ���� �����ָ鼭 ���ϸ� �ߺ��� ���� ��츸 �̾� ���� �� �ְ�
�ȴ�.

1, 2, 3 ���ϱ� 4�� �Ȱ��� ����
*/
int coin[101];
int dp[10001];
int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, k;
  cin >> n >> k;
  for (int i = 0; i < n; ++i) {
    cin >> coin[i];
  }
  dp[0] = 1;
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j <= k; ++j) {
      if (j - coin[i] >= 0)
        dp[j] += dp[j - coin[i]];
    }
  }
  cout << dp[k] << '\n';
  return 0;
}