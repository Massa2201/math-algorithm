#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;

int main() {
  int n, h[100009], dp[100009];

  cin >> n;
  for (int i = 1; i <= n; i++) cin >> h[i];

  for (int i = 1; i <= n; i++) {
    if (i == 1) dp[i] = 0;
    if (i == 2) dp[i] = abs(h[i - 1] - h[i]);
    if (i >= 3) {
      int v1 = dp[i - 1] + abs(h[i - 1] - h[i]);
      int v2 = dp[i - 2] + abs(h[i - 2] - h[i]);
      dp[i] = min(v1, v2);
    }
  }
  cout << dp[n] << endl;
}


/*

2次元配列 縦横 3 × 4
vector<vector<int>> data(3, vector<int>(4));

vector dp(n + 1, vector<int>(9));

vector<int> vec(N);

2次元配列 N x N 中に'-'を入れている
vector<vector<char>> table(N, vector<char>(N, '-'));

*/