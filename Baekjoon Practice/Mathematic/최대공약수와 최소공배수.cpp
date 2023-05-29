#include <iostream>

using namespace std;

int GCD(int a, int b) {
  // �ִ�����
  // ��Ŭ���� ȣ����
  // GCD(a,b) = GCD(b,a%b) a�� ũ�� b�� ũ�� ��� ����
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }

  return a;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int a, b;

  cin >> a >> b;
  // �ּҰ���� = a*b / �ִ�����
  cout << GCD(a, b) << '\n' << (a * b) / GCD(a, b) << '\n';
  return 0;
}