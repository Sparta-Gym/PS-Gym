#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

ll GCD(ll a, ll b) {

  while (b != 0) {
    ll r = a % b;
    a = b;
    b = r;
  }

  return a;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  vector<ll> v(n);
  for (int i = 0; i < n; ++i) {
    cin >> v[i];
  }
  // ���� ��ü�� ���� m���� ������ �� �������� ��� ���ٸ�,
  // v[i] - v[i-1] = m * (��[i] - ��[i-1])�� �����ؾ��Ѵ�.
  // ������ m�� ���ؼ�
  // v[i] - v[i-1] / (��[i] - ��[i-1]) = m�� �����Ϸ���
  // (��[i] - ��[i-1]) * m == m�� ���
  // (��[i] - ��[i - 1]) �̰��� �ִ밪�� ã�� => �ִ�����
  // �� ���� ����� ��� �����ָ� �ȴ�.
  sort(v.begin(), v.end());

  ll g = v[1] - v[0];
  for (int i = 2; i < n; ++i) {
    g = GCD(g, v[i] - v[i - 1]);
  }
  vector<ll> ans;
  // g = i * g/i �̹Ƿ� i�� g/i�� g�� ���
  for (int i = 2; i * i <= g; ++i) {
    if (g % i == 0) {
      ans.push_back(i);
      ans.push_back(g / i);
    }
  }
  ans.push_back(g);
  sort(ans.begin(), ans.end());
  // �ߺ� ���� STL
  ans.erase(unique(ans.begin(), ans.end()), ans.end());
  for (ll i : ans) {
    cout << i << ' ';
  }
  cout << '\n';
  return 0;
}