
#include <iostream>
#include <vector>

using namespace std;

const int MAX = 1000000;
int primes = 0;
bool check[MAX + 1];
int eratosthenes[MAX];

void Goldbach() {

  // 0,1 ���� ó��
  check[0] = check[1] = true;
  // i*i ~ n������ �� �� �ܰ迡�� �ɷ���
  for (int i = 2; i <= MAX; ++i) {
    if (!check[i]) {
      // �Ҽ� ���� ����
      eratosthenes[primes++] = i;
      // i*i�� �����÷ο� ��������� 2*i�� �ϴ°� ����
      for (int j = 2 * i; j <= MAX; j += i) {
        check[j] = true;
      }
    }
  }

  while (1) {
    int n;
    cin >> n;
    if (!n)
      break;
    //�߰ߵ� �Ҽ��� ������ŭ �ݺ�
    for (int i = 1; i < primes; i++) {
      if (!check[n - eratosthenes[i]]) {
        // �Էµ� �� - �߰ߵ� �Ҽ�(ù��° ����) = �̰͵� �Ҽ��̸�
        // ���� 2�߷��� ������ pair�� ã���� �׷��µ� => �ð��ʰ�
        // �ε��� ���̷� ���� �������鼭 �� �Ҽ��� �������� ���� !!
        // �������� ������ � Ư�� ������ �����ϴ� �� ���Ҷ� ������� ����
        // ���
        cout << n << " = " << eratosthenes[i] << " + " << n - eratosthenes[i]
             << '\n';
        break;
      }
    }
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  Goldbach();
  return 0;
}