#include <bits/stdc++.h>

using namespace std;

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int n;
  cin >> n;
  long long arr[n];
  for (int i = 0; i < n; ++i) {
    cin >> arr[i];
  }
  sort(arr, arr + sizeof(arr) / 8);
  long long cur = arr[0],
            answer =
                (1ll << 62) * -1 - 1;  // 1을 long long으로 형변환하지 않고 1
                                       // << 62로 작성시 int overflow 발생
  int max_freq = 0, cnt = 0, i = 0;
  while (i < n) {
    while (cur == arr[i]) {
      cnt += 1;
      i += 1;
    }
    if (max_freq < cnt) {
      max_freq = cnt;
      answer = arr[i - 1];
    }
    cnt = 0;
    cur = arr[i];
  }
  cout << answer << '\n';
  return 0;
}