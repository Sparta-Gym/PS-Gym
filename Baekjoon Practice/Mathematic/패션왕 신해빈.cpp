#include <iostream>
#include <map>
using namespace std;

typedef long long ll;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    map<string, int> types;
    while (n--) {
      string name, type;
      // �̸��� ����ũ => Ű
      cin >> name >> type;
      // ���� Ÿ���̹Ƿ� �ٸ��̸��� ���� ������ �󵵼� �迭
      types[type] += 1;
    }
    map<string, int>::iterator it = types.begin();
    ll ans = 1;
    for (; it != types.end(); ++it) {
      ans *= (ll)(it->second + 1);
    }
    cout << ans - 1 << '\n';
  }

  return 0;
}