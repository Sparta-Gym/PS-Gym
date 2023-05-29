#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n, k;
  cin >> n >> k;
  int op_cnt = 0;
  // ��� �̿��ϱ�
  int target;
  while (true) {
    target = (n / k) * k;   // target�� k�� ���
    op_cnt += (n - target); // ����� ���߱����� �ʿ��� -1�� ���� op_cnt�� ����
    n = target;             // ����� ��
    if (n < k)
      break;
    op_cnt += 1; // ���� ȸ��
    n /= k;      // ������ �ٽ� ������ ����
  }
  op_cnt += (n - 1); // -1�� �Ͽ� 1�� ����� ���� ������ ����� �ʿ��Ѱ�? n-1��
  return 0;
}