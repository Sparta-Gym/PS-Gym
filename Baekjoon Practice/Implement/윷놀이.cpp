#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int tc = 3;
  while (tc--) {
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < 4; ++i) {
      cin >> temp;
      sum += temp;
    }
    // ���� 0, 1, 2, 3, 4
    switch (sum) {
    case 3:
      cout << 'A' << '\n';
      break;

    case 2:
      cout << 'B' << '\n';
      break;

    case 1:
      cout << 'C' << '\n';
      break;

    case 0:
      cout << 'D' << '\n';
      break;

    case 4:
      cout << 'E' << '\n';
      break;

    default:
      cout << "�߸��� �Է��Դϴ�." << '\n';
      break;
    }
  }
  return 0;
}