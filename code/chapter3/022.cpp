#include<iostream>
using namespace std;
using ll = long long;
using ld = long double;

ll n, a[200009];
ll cnt[100009];
ll ans = 0;

int main() {
  cin >> n;
  
  for (int i = 1; i <= n; i++) cin >> a[i];
  for (int i = 1; i <= 99999; i++) cnt[i] = 0;
  for (int i = 1; i <= n; i++) cnt[a[i]] += 1;

  for (int i = 1; i<= 49999; i++) {
    ans += cnt[i] * cnt[100000 - 1];
  }
  ans += cnt[50000] * cnt[50000 - 1] / 2;

  cout << ans << endl;
  

  // 自分の回答
  // ll n, a, b;
  // vector<ll> cnt(100002);
  // cin >> n;
  // vector<ll> num(n);
  // for (int i = 0; i < n; i++) {
  //   cin >> num.at(i);
  //   cnt.at(num.at(i)) ++;
  // }
  // for (int i = 0; i < n; i++) {
  //   if (cnt.at(50000) != 0) {
  //     a += cnt.at(50000) * (cnt.at(50000) -1)/ 2;
  //   }
  //   if (cnt.at(i + 1) * cnt.at(100001 - i) != 0) {
  //     a += cnt.at(i + 1) * cnt.at(100001 - i);
  //   }
  // }
  // cout << a << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/