#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  // n��° ȸ�Ƿ� �����ϸ� �� ��� ȸ�ǰ� ������� üũ
  // Ž�����: ���۽ð��� ���� ��� (���ð� - ���۽ð�)�� ���� ª�� ��, ����
  // ȸ�ǿ� ����ȸ���� ������ ���� ª�� �� �ȵǴ� ��: ���� ȸ�ǽ��۽ð���
  // ����ȸ���� ���ð����� ���� ��� ���� ȸ�Ǹ� ������, i loop���� ��
  // ������ ȸ���� ���ʰ� ���� ������ ��Ű�� ���ݾ�? ���� ȸ�Ǹ� �������� ��
  // �ð��ʰ� -> �ٸ� ��� �ʿ�
  // ȸ�ǰ� ������ �ð��� �����ϰ� ���ٸ�, ���۽ð��� ���� ���� ��������
  // �����Ͽ� ȸ���� ���� ����. ������ �ð��� �������� �����ص� ���� ª�� ȸ�Ǹ�
  // ã�� �� �ִ� �ֳ��ϸ� ������ �ð��� �۴ٴ� ���� �׸�ŭ ȸ�ǰ� ���ﳡ���ٴ�
  // ����, ������ ������ �� �ִ� ȸ�Ǹ� �� ���� ���� �� �ִ� �׸��� ������
  // �ð��� ���ٸ� ���۽ð��� ������ �Ǳ� ������
  vector<pair<int, int>> conference(n, make_pair(0, 0));
  for (int i = 0; i < n; ++i) {
    cin >> conference[i].first >> conference[i].second;
  }

  sort(conference.begin(), conference.end(),
       [&conference](pair<int, int> a, pair<int, int> b) {
         if (a.second == b.second) {
           return a.first < b.first;
         }
         return a.second < b.second;
       });
  int max_con = 0;
  int present_con = 0;
  for (int i = 0; i < n; ++i) {
    if (present_con <= conference[i].first) {
      present_con = conference[i].second;
      max_con++;
    }
  }
  cout << max_con << '\n';
  /*
  vector<int> next_con(n, n+1); // i��° ȸ���� ����ȸ���� �ε����� ��´�
  for (int i = 0; i < n; ++i) {
          int min_time = INT_MAX;
          int min_bin = INT_MAX;
          for (int j = 0; j < n; ++j) {
                  if (i == j) continue;
                  if (conference[i].second <= conference[j].first) {
                          if (conference[j].first - conference[i].second <=
  min_bin) { min_bin = conference[j].first - conference[i].second; if
  (conference[j].second - conference[j].first < min_time) { next_con[i] = j;
                                          min_time = conference[j].second -
  conference[j].first;
                                  }
                          }
                  }
          }
  }
  int max_num_of_con = 0;
  for (int i = 0; i < n; ++i) {
          int cursor = next_con[i];
          int count = 0;
          while (cursor != n + 1) {
                  cursor = next_con[cursor];
                  count += 1;
          }
          if (count > max_num_of_con) {
                  max_num_of_con = count;
          }
  }
  cout << max_num_of_con+1 << '\n';
  */
  return 0;
}